#include "upper_bound.hpp"

int Solution::upper_bound(const std::vector<int>& nums, int target) {
    const int num = static_cast<int>(nums.size());
    for (int i = 0; i < num; i++) {
        if (nums[i] > target) {
            return i;
        }
    }

    return num;
}

/*
 * Big O (n la so phan tu, mang da duoc sap xep):
 * - Time: O(n).
 * - Space: O(1).
 */
