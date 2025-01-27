#include "listnode.hpp"
#include <algorithm>
#include <vector>
#include <iterator>
#include <string>

ListNode::ListNode(std::initializer_list<int> nums)
{
    std::vector<ListNode*> nodes;
    std::transform(nums.begin(), nums.end(), std::back_inserter(nodes), [](int x)
                   { return new ListNode(x); });

    for (size_t i = 1; i < nodes.size(); i++)
    {
        nodes[i - 1]->next = nodes[i];
    }
    this->val = nodes.front()->val; 
    this->next = nodes.front()->next; 
}

std::ostream &operator<<(std::ostream &os, const ListNode &node)
{
    os << '[';
    const ListNode* head = &node;  
    
    while (head != nullptr)
    {
        os << head->val; 
        os << ((head->next == nullptr) ? ']' : ','); 
        head = head->next; 
    }
    return os; 
}
