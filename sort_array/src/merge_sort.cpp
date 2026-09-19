#include "merge_sort.hpp"

void Solution::merge(std::vector<int>& nums, int left, int mid, int right) {
    std::vector<int> L; 
    std::vector<int> R;
    for (int i = left; i <= mid; i++) {
        L.push_back(nums[i]);
    }
    for (int i = mid + 1; i <= right; i++) {
        R.push_back(nums[i]);
    }
    int i = 0, j = 0, k = left;
    while (i < L.size() && j < R.size()) {
        if (L[i] <= R[j]) {
            nums[k] = L[i];
            i++;
        } else {
            nums[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < L.size()) {
        nums[k] = L[i];
        i++;
        k++;
    }
    while (j < R.size()) {
        nums[k] = R[j];
        j++;
        k++;
    }
}
void Solution::mergeSort(std::vector<int>& nums, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        mergeSort(nums, left, mid);
        mergeSort(nums, mid + 1, right);
        merge(nums, left, mid, right);
    }
}
std::vector<int> Solution::sortArray(std::vector<int>& nums) {
    // TODO: Cai dat Merge Sort tai day.

     if (!nums.empty()) {
        mergeSort(nums, 0, nums.size() - 1);
    }

    return nums;
}

/*
 * Big O (n la so phan tu):
 * - Time: Best/Average/Worst O(n log n).
 *   Mang duoc chia doi qua log n tang de quy; tai moi tang, thao tac merge xu ly tong cong n phan tu.
 * - Space: O(n).
 *   Hai vector tam L va R chua tong cong toi da n phan tu; stack de quy O(log n) nho hon O(n).
 */
