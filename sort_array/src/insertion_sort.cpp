#include "insertion_sort.hpp"

std::vector<int> Solution::sortArray(std::vector<int>& nums) {
    // TODO: Cai dat Insertion Sort tai day.
    for (int i = 1; i < nums.size(); i++) {
        int key = nums[i];
        int j = i - 1;

        while (j >= 0 && nums[j] > key) {
            nums[j + 1] = nums[j];
            j--;
        }
        nums[j + 1] = key;
    }
    return nums;
}

/*
 * Big O (n la so phan tu):
 * - Time: Best O(n), Average/Worst O(n^2).
 *   Mang da tang dan chi can mot lan kiem tra cho moi phan tu; trong truong hop trung binh
 *   hoac dao nguoc, moi phan tu co the phai dich qua mot phan lon mang da sap xep.
 * - Space: O(1).
 *   Cac phan tu duoc dich ngay trong nums va chi can bien key cung cac bien chi so.
 */
