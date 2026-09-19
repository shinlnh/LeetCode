#include "bubble_sort.hpp"

#include <utility>

std::vector<int> Solution::sortArray(std::vector<int>& nums) {
    
    int n = nums.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (nums[j] > nums[j + 1]) {
                std::swap(nums[j], nums[j + 1]);
            }
        }
    }
    return nums;
}

/*
 * Big O (n la so phan tu):
 * - Time: Best/Average/Worst O(n^2).
 *   Hai vong lap luon thuc hien n(n - 1) / 2 lan so sanh, ke ca khi mang da co thu tu.
 * - Space: O(1).
 *   Thuat toan sap xep truc tiep tren nums va chi dung mot so bien tam co dinh.
 */
