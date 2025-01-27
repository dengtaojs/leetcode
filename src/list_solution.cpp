#include "../include/list_solution.hpp"
#include <vector>

ListNode *ListSolution::addTwoNumbers(const ListNode *l1, const ListNode *l2) {
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


