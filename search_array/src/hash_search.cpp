#include "hash_search.hpp"

#include <unordered_map>

int Solution::search(std::vector<int>& nums, int target) {
    std::unordered_map<int, int> indices;

    for (int i = 0; i < static_cast<int>(nums.size()); i++) {
        indices.emplace(nums[i], i);
    }

    const auto result = indices.find(target);
    if (result == indices.end()) {
        return -1;
    }

    return result->second;
}

/*
 * Big O (n la so phan tu):
 * - Time: Tao hash table O(n); moi lan lookup trung binh O(1), xau nhat O(n)
 *   khi nhieu khoa roi vao cung mot bucket.
 * - Space: O(n).
 *   Hash table luu toi da mot chi so cho moi gia tri phan biet trong mang.
 */
