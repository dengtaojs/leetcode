#pragma once
#include <initializer_list>
#include <ostream>

struct ListNode
{
    int val; 
    ListNode* next; 
    
    explicit ListNode(int x = 0, ListNode* nextNode = nullptr): val{x}, next{nextNode} {}
    ListNode(std::initializer_list<int> nums); 
};

std::ostream& operator<<(std::ostream& os, const ListNode& node); 
