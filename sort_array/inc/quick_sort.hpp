#pragma once

#include <vector>

class Solution {
public:
    int partition(std::vector<int>& nums, int low, int high);
    void quickSort(std::vector<int>& nums, int low, int high);
    std::vector<int> sortArray(std::vector<int>& nums);
};
