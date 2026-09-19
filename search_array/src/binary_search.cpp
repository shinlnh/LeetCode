#include "binary_search.hpp"

int Solution::search(std::vector<int>& nums, int target) {
    int left = 0;
    int right = static_cast<int>(nums.size()) - 1;

    while (left <= right) {
        const int mid = left + (right - left) / 2;

        if (nums[mid] == target) {
            return mid;
        }
        if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1;
}

/*
 * Big O (n la so phan tu, mang da duoc sap xep):
 * - Time: Best O(1), Average/Worst O(log n).
 *   Moi lan so sanh loai bo mot nua khoang tim kiem con lai.
 * - Space: O(1).
 *   Phien ban lap chi dung cac bien left, right va mid.
 */
