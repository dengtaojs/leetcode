#include "../include/list_solution.hpp"
#include <algorithm>
#include <vector>
#include <iterator>

ListNode::ListNode(std::initializer_list<int> nums) {
    std::vector<ListNode *> nodes;
    std::ranges::transform(nums, std::back_inserter(
        nodes), [](const int x) { return new ListNode(x); });

    for (size_t i = 1; i < nodes.size(); i++) {
        nodes[i - 1]->next = nodes[i];
    }
    this->val = nodes.front()->val;
    this->next = nodes.front()->next;
}

std::ostream &operator<<(std::ostream &os, const ListNode &node) {
    os << '[';
    const ListNode *head = &node;

    while (head != nullptr) {
        os << head->val;
        os << ((head->next == nullptr) ? ']' : ',');
        head = head->next;
    }
    return os;
}
