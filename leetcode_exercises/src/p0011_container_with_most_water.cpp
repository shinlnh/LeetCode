#include "p0011_container_with_most_water.hpp"

#include <algorithm>

int Solution::maxArea(std::vector<int>& height) {
    int left = 0;
    int right = static_cast<int>(height.size()) - 1;
    int max_area = 0;

    while (left < right) {
        const int current_height = std::min(height[left], height[right]);
        const int width = right - left;
        max_area = std::max(max_area, current_height * width);

        if (height[left] < height[right]) {
            left++;
        } else {
            right--;
        }
    }

    return max_area;
}

/*
 * Big O (n la so cot):
 * - Time: O(n).
 * - Space: O(1).
 */
