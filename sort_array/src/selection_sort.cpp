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
