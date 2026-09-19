#include "heap_sort.hpp"

#include <utility>

void Solution::heapify(std::vector<int>& arr, int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest]) {
        largest = left;
    }
    if (right < n && arr[right] > arr[largest]) {
        largest = right;
    }

    if (largest != i) {
        std::swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}

void Solution::sort(std::vector<int>& arr) {
    int n = arr.size();

    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify(arr, n, i);
    }

    for (int i = n - 1; i >= 0; i--) {
        std::swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}

std::vector<int> Solution::sortArray(std::vector<int>& nums) {
    sort(nums);
    return nums;
}

/*
 * Big O (n la so phan tu):
 * - Time: Best/Average/Worst O(n log n).
 *   Tao max-heap mat O(n); sau do co n lan dua phan tu lon nhat ve cuoi va heapify mat toi da O(log n).
 * - Space: O(log n).
 *   Mang duoc sap xep tai cho, nhung heapify de quy can stack toi da bang chieu cao cua heap.
 */
