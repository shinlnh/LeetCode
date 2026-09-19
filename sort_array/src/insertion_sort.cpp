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
