#include "solution.hpp"
#include <vector>
#include <map>

ListNode *Solution::addTwoNumbers(const ListNode *l1, const ListNode *l2) {
    std::vector<ListNode *> nodes;
    int carry = 0;

    while (l1 != nullptr || l2 != nullptr) {
        int sum = carry;
        if (l1 != nullptr) {
            sum += l1->val;
            l1 = l1->next;
        }

        if (l2 != nullptr) {
            sum += l2->val;
            l2 = l2->next;
        }

        nodes.push_back(new ListNode(sum % 10));
        carry = sum / 10;
    }

    if (carry != 0) {
        nodes.push_back(new ListNode(carry));
    }

    for (size_t i = 1; i < nodes.size(); i++) {
        nodes[i - 1]->next = nodes[i];
    }

    return nodes.empty() ? nullptr : nodes.front();
}

int Solution::lengthOfLongestSubString(const std::string &s) {
    if (s.size() < 2) {
        return static_cast<int>(s.size());
    }

    size_t maxLength = 1;
    const size_t strLength = s.size();
    std::map<char, size_t> dict;
    for (size_t i = 0; i < strLength; i++) {
        const char current = s[i];
        if (dict.contains(current)) {
            const size_t index = dict[current];
            std::erase_if(dict, [=](const auto& item) {
                auto const&[k, v] = item;
                return v <= index;
            });
        }
        dict[current] = i;
        if (dict.size() > maxLength) {
            maxLength = dict.size();
        }
    }
    return  static_cast<int>(maxLength);
}
