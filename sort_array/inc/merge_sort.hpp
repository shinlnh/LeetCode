#pragma once

#include <vector>

class Solution {
private: 
    void merge(std::vector<int>& nums, int left, int mid, int right);
    void mergeSort(std::vector<int>& nums, int left, int right);
public:
    std::vector<int> sortArray(std::vector<int>& nums);
};
