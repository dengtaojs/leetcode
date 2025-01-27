#include "solution.hpp"
#include <iostream>
#include <map>

int main() {


    while (true) {
        std::cout << "Enter text: ";
        std::string s;
        std::getline(std::cin, s);

        if (s.empty()) {
            break;
        }

        const int result = Solution::lengthOfLongestSubString(s);
        std::cout << "result = " << result << '\n';
    }
    return 0;
}