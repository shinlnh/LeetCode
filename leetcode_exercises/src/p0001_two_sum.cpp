#include "p0001_two_sum.hpp"

#include <unordered_map>

std::vector<int> Solution::twoSum(std::vector<int>& nums, int target) {
    std::unordered_map<int, int> indices;

    for (int i = 0; i < static_cast<int>(nums.size()); i++) {
        const int complement = target - nums[i];
        const auto result = indices.find(complement);
        if (result != indices.end()) {
            return {result->second, i};
        }

        indices.emplace(nums[i], i);
    }

    return {};
}

/*
 * Big O (n la so phan tu):
 * - Time: trung binh O(n), xau nhat O(n^2) neu hash collision nghiem trong.
 * - Space: O(n).
 */
