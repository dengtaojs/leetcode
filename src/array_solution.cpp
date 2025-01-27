//
// Created by dengtao on 1/27/2025.
//

#include "../include/array_solution.hpp"

double ArraySolution::findMedianSortedArrays(
    std::vector<int> &nums1, std::vector<int> &nums2) {

    size_t length = (nums1.size() + nums2.size()) / 2 + 1;
    std::vector<int> medians;
    size_t a = 0, b = 0;

    for (size_t i = 0; i < length; i++) {
        int v1 = a >= nums1.size() ? INT_MAX : nums1[a];
        int v2 = b >= nums2.size() ? INT_MAX : nums2[b];


        if (length <= 2) {
            medians.push_back(std::min(v1, v2)) ;
        }

        if (v1 <= v2) {
            a++;
        } else {
            b++;
        }

    }
}
