#include "p0238_product_of_array_except_self.hpp"

std::vector<int> Solution::productExceptSelf(std::vector<int>& nums) {
    const int size = static_cast<int>(nums.size());
    std::vector<int> result(size, 1);

    int prefix = 1;
    for (int i = 0; i < size; i++) {
        result[i] = prefix;
        prefix *= nums[i];
    }

    int suffix = 1;
    for (int i = size - 1; i >= 0; i--) {
        result[i] *= suffix;
        suffix *= nums[i];
    }

    return result;
}

/*
 * Big O (n la so phan tu):
 * - Time: O(n).
 * - Space: O(1) neu khong tinh vector ket qua theo yeu cau cua bai toan.
 */
