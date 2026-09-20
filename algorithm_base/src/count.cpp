#include "count.hpp"

#include <algorithm>

int Solution::count(const std::vector<int>& nums, int target) {
    return static_cast<int>(std::count(nums.begin(), nums.end(), target));
}

/*
 * Big O (n la so phan tu):
 * - Time: O(n).
 * - Space: O(1).
 */
