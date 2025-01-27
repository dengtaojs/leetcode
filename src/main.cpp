#include "solution.hpp"
#include <iostream>

int main() {
    std::string s = "qrsvbspk";
    const int result = Solution::lengthOfLongestSubString(s);
    std::cout << "result = " << result << '\n';
}