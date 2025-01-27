#ifndef LIST_SOLUTION_HPP
#define LIST_SOLUTION_HPP

#include "listnode.hpp"
#include <string>

class ListSolution
{
public:
    /// 两数之和。
    /// @param l1 单向链表1.
    /// @param l2 单向链表2.
    /// @return 两数之和。
    static ListNode* addTwoNumbers(const ListNode* l1, const ListNode* l2);
};

#endif