#include "linear_search.hpp"

int Solution::search(std::vector<int>& nums, int target) {
    for (int i = 0; i < static_cast<int>(nums.size()); i++) {
        if (nums[i] == target) {
            return i;
        }
    }

    return -1;
}

/*
 * Big O (n la so phan tu):
 * - Time: Best O(1), Average/Worst O(n).
 *   Target co the nam ngay dau mang, nhung trung binh can duyet mot phan mang
 *   va truong hop xau nhat phai duyet het mang.
 * - Space: O(1).
 *   Thuat toan chi dung mot bien chi so va khong tao them cau truc du lieu.
 */
