#include "quick_sort.hpp"


int Solution::partition(std::vector<int>& nums, int low, int high) {
    int pivot = nums[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (nums[j] < pivot) {
            i++;
            std::swap(nums[i], nums[j]);
        }
    }
    std::swap(nums[i + 1], nums[high]);
    return i + 1;
}

void Solution::quickSort(std::vector<int>& nums, int low, int high) {
    if (low < high) {
        int pivotIndex = partition(nums, low, high);
        quickSort(nums, low, pivotIndex - 1);
        quickSort(nums, pivotIndex + 1, high);
    }
}   
std::vector<int> Solution::sortArray(std::vector<int>& nums) {
    // TODO: Cai dat Quick Sort tai day.
    quickSort(nums, 0, nums.size() - 1);
    return nums;
}

/*
 * Big O (n la so phan tu):
 * - Time: Best/Average O(n log n), Worst O(n^2).
 *   Moi lan partition duyet doan hien tai mot lan. Pivot chia mang can bang tao log n tang;
 *   pivot luon nho nhat hoac lon nhat tao n tang, nhu khi mang da co thu tu voi pivot o cuoi.
 * - Space: Best/Average O(log n), Worst O(n).
 *   Mang duoc sap xep tai cho, nhung stack de quy co do sau bang so tang chia mang.
 */
