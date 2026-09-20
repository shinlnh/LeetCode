#include "reverse.hpp"

#include <algorithm>

void Solution::reverse(std::vector<int>& nums) {
    const int num = static_cast<int>(nums.size());
    for (int i = 0; i < num / 2; i++) {
        std::swap(nums[i], nums[num - 1 - i]);
    }
}

/*
 * Big O (n la so phan tu):
 * - Time: O(n).
 * - Space: O(1).
 */
