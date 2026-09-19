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
