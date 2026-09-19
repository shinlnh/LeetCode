#include "selection_sort.hpp"

std::vector<int> Solution::sortArray(std::vector<int>& nums) {
    // TODO: Cai dat Selection Sort tai day.
    int n = nums.size();
    for (int i = 0; i < n - 1; i++){
        int min_idx = i;
        for (int j = i + 1; j < n; j++){
            if (nums[j] < nums[min_idx]){
                min_idx = j;
            }
        }
        std::swap(nums[i], nums[min_idx]);
    }
    return nums;
}

/*
 * Big O (n la so phan tu):
 * - Time: Best/Average/Worst O(n^2).
 *   Moi vi tri deu phai duyet phan chua sap xep de tim gia tri nho nhat, tong cong
 *   n(n - 1) / 2 lan so sanh, bat ke thu tu ban dau cua mang.
 * - Space: O(1).
 *   Thuat toan sap xep tai cho va chi dung cac bien chi so cung mot bien vi tri nho nhat.
 */
