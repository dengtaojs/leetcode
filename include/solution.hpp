#pragma once
#include "listnode.hpp"
#include <string>

class Solution
{
public:
    /// 两数之和。
    /// @param l1 单向链表1.
    /// @param l2 单向链表2.
    /// @return 两数之和。
    static ListNode* addTwoNumbers(const ListNode* l1, const ListNode* l2);

    /// 无重复字符的最长子串。
    /// @param s 由英文字母、数字、符号和空格组成。
    /// @return 最长的无重复字符的子串的长度。
    static int lengthOfLongestSubString(const std::string& s);
};