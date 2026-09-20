#include "min_element.hpp"

int Solution::min_element(const std::vector<int>& nums) {
    if (nums.empty()) {
        return -1;
    }

    const int num = static_cast<int>(nums.size());
    int min = nums[0];
    for (int i = 1; i < num; i++) {
        if (nums[i] < min) {
            min = nums[i];
        }
    }

    return min;
}

/*
 * Big O (n la so phan tu):
 * - Time: O(n).
 * - Space: O(1).
 */
