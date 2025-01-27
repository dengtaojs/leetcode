#include "listnode.hpp"
#include "solution.hpp"
#include <iostream>

int main() {
    ListNode l1 =  {9}; 
    ListNode l2 = {1,3};

    Solution s;
    auto result = s.addTwoNumbers(&l1, &l2); 
    std::cout << *result << '\n';
}