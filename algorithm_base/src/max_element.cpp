#include "max_element.hpp"

int Solution::max_element(const std::vector<int>& nums) {
    if (nums.empty()) {
        return -1;
    }

    const int num = static_cast<int>(nums.size());
    int max = nums[0];
    for (int i = 1; i < num; i++) {
        if (nums[i] > max) {
            max = nums[i];
        }
    }

    return max;
}

/*
 * Big O (n la so phan tu):
 * - Time: O(n).
 * - Space: O(1).
 */
