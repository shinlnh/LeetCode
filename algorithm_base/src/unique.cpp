#include "unique.hpp"

std::vector<int> Solution::unique(std::vector<int>& nums) {
    if (nums.empty()) {
        return nums;
    }

    const int num = static_cast<int>(nums.size());
    int write = 0;
    for (int read = 1; read < num; read++) {
        if (nums[read] != nums[write]) {
            write++;
            nums[write] = nums[read];
        }
    }

    nums.resize(write + 1);
    return nums;
}

/*
 * Big O (n la so phan tu):
 * - Time: O(n).
 * - Space: O(1), khong tinh bo nho cua vector dau vao.
 * - Luu y: thuat toan chi loai bo cac phan tu trung nhau lien tiep.
 */
