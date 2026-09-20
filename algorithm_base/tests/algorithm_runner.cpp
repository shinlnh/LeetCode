#include <iostream>
#include <vector>

#ifndef ALGORITHM_HEADER
#error "ALGORITHM_HEADER must be defined by CMake"
#endif

#ifndef ALGORITHM_NAME
#define ALGORITHM_NAME "unknown_algorithm"
#endif

#include ALGORITHM_HEADER

int main() {
    Solution solution;
    bool passed = false;

#if defined(ALGORITHM_VARIANT_FIND)
    const std::vector<int> nums{4, 1, 7, 1};
    passed = solution.find(nums, 7) == 2 && solution.find(nums, 9) == -1;
#elif defined(ALGORITHM_VARIANT_LOWER_BOUND)
    const std::vector<int> nums{1, 2, 2, 2, 4};
    passed = solution.lower_bound(nums, 2) == 1 && solution.lower_bound(nums, 5) == 5;
#elif defined(ALGORITHM_VARIANT_UPPER_BOUND)
    const std::vector<int> nums{1, 2, 2, 2, 4};
    passed = solution.upper_bound(nums, 2) == 4 && solution.upper_bound(nums, 4) == 5;
#elif defined(ALGORITHM_VARIANT_MIN_ELEMENT)
    const std::vector<int> nums{5, 2, 8, -1};
    passed = solution.min_element(nums) == -1;
#elif defined(ALGORITHM_VARIANT_MAX_ELEMENT)
    const std::vector<int> nums{5, 2, 8, -1};
    passed = solution.max_element(nums) == 8;
#elif defined(ALGORITHM_VARIANT_COUNT)
    const std::vector<int> nums{1, 2, 2, 3, 2};
    passed = solution.count(nums, 2) == 3;
#elif defined(ALGORITHM_VARIANT_REVERSE)
    std::vector<int> nums{1, 2, 3, 4};
    solution.reverse(nums);
    passed = nums == std::vector<int>({4, 3, 2, 1});
#elif defined(ALGORITHM_VARIANT_UNIQUE)
    std::vector<int> nums{1, 1, 2, 2, 2, 3};
    const std::vector<int> result = solution.unique(nums);
    passed = result == std::vector<int>({1, 2, 3}) && nums == result;
#else
#error "An algorithm variant must be defined by CMake"
#endif

    std::cout << ALGORITHM_NAME << ": " << (passed ? "passed" : "failed") << '\n';
    return passed ? 0 : 1;
}
