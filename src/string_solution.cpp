//
// Created by dengtao on 1/27/2025.
//
#include "../include/string_solution.hpp"
#include <map>

int StringSolution::lengthOfLongestSubString(const std::string &s) {
    if (s.size() < 2) {
        return static_cast<int>(s.size());
    }

    size_t maxLength = 1;
    const size_t strLength = s.size();
    std::map<char, size_t> dict;
    for (size_t i = 0; i < strLength; i++) {
        const char current = s[i];
        if (dict.contains(current)) {
            const size_t index = dict[current];
            std::erase_if(dict, [=](const auto& item) {
                auto const&[k, v] = item;
                return v <= index;
            });
        }
        dict[current] = i;
        if (dict.size() > maxLength) {
            maxLength = dict.size();
        }
    }
    return  static_cast<int>(maxLength);
}
