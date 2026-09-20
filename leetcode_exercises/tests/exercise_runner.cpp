#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

#ifndef EXERCISE_HEADER
#error "EXERCISE_HEADER must be defined by CMake"
#endif

#ifndef EXERCISE_NAME
#define EXERCISE_NAME "unknown_exercise"
#endif

#include EXERCISE_HEADER

int main() {
    Solution solution;
    bool passed = false;

#if defined(EXERCISE_VARIANT_P0001_TWO_SUM)
    std::vector<int> nums{2, 7, 11, 15};
    std::vector<int> duplicates{3, 3};
    passed = solution.twoSum(nums, 9) == std::vector<int>({0, 1})
        && solution.twoSum(duplicates, 6) == std::vector<int>({0, 1});
#elif defined(EXERCISE_VARIANT_P0121_BEST_TIME_TO_BUY_AND_SELL_STOCK)
    std::vector<int> prices{7, 1, 5, 3, 6, 4};
    std::vector<int> descending_prices{7, 6, 4, 3, 1};
    passed = solution.maxProfit(prices) == 5 && solution.maxProfit(descending_prices) == 0;
#elif defined(EXERCISE_VARIANT_P0238_PRODUCT_OF_ARRAY_EXCEPT_SELF)
    std::vector<int> nums{1, 2, 3, 4};
    std::vector<int> nums_with_zero{0, 1, 2, 3};
    passed = solution.productExceptSelf(nums) == std::vector<int>({24, 12, 8, 6})
        && solution.productExceptSelf(nums_with_zero) == std::vector<int>({6, 0, 0, 0});
#elif defined(EXERCISE_VARIANT_P0011_CONTAINER_WITH_MOST_WATER)
    std::vector<int> height{1, 8, 6, 2, 5, 4, 8, 3, 7};
    std::vector<int> two_lines{1, 1};
    passed = solution.maxArea(height) == 49 && solution.maxArea(two_lines) == 1;
#elif defined(EXERCISE_VARIANT_P0053_MAXIMUM_SUBARRAY)
    std::vector<int> nums{-2, 1, -3, 4, -1, 2, 1, -5, 4};
    std::vector<int> negative_nums{-3, -2, -5};
    passed = solution.maxSubArray(nums) == 6 && solution.maxSubArray(negative_nums) == -2;
#else
#error "An exercise variant must be defined by CMake"
#endif

    std::cout << EXERCISE_NAME << ": " << (passed ? "passed" : "failed") << '\n';
    return passed ? 0 : 1;
}
