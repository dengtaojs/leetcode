#pragma once
#include "listnode.hpp"
#include <string>

class Solution
{
public:
    /// 两数之和。
    static ListNode* addTwoNumbers(const ListNode* l1, const ListNode* l2);

    /// 无重复字符的最长子串。
    ///
    /// 字符串[s]由英文字母、数字、符号和空格组成。
    static int lengthOfLongestSubString(const std::string& s);


};