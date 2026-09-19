#pragma once

#include <vector>

class Solution {
public:
    std::vector<int> sortArray(std::vector<int>& nums);

private:
    void heapify(std::vector<int>& arr, int n, int i);
    void sort(std::vector<int>& arr);
};
