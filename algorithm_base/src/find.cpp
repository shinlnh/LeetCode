#include "find.hpp"

int Solution::find(const std::vector<int>& nums, int target) {
    const int num = static_cast<int>(nums.size());
    for (int i = 0; i < num; i++) {
        if (nums[i] == target) {
            return i;
        }
    }

    return -1;
}

/*
 * Big O (n la so phan tu):
 * - Time: Best O(1), Average/Worst O(n).
 * - Space: O(1).
 */
