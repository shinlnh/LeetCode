#include "p0053_maximum_subarray.hpp"

#include <algorithm>

int Solution::maxSubArray(std::vector<int>& nums) {
    if (nums.empty()) {
        return 0;
    }

    int current_sum = nums[0];
    int max_sum = nums[0];

    for (int i = 1; i < static_cast<int>(nums.size()); i++) {
        current_sum = std::max(nums[i], current_sum + nums[i]);
        max_sum = std::max(max_sum, current_sum);
    }

    return max_sum;
}

/*
 * Big O (n la so phan tu):
 * - Time: O(n).
 * - Space: O(1).
 */
