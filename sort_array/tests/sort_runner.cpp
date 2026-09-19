#include <iostream>
#include <vector>

#ifndef SORT_HEADER
#error "SORT_HEADER must be defined by CMake"
#endif

#ifndef SORT_NAME
#define SORT_NAME "unknown_sort"
#endif

#include SORT_HEADER

int main() {
    std::vector<int> nums{5, 2, 3, 1};

    Solution solution;
    const std::vector<int> result = solution.sortArray(nums);

    std::cout << SORT_NAME << ": ";
    for (const int value : result) {
        std::cout << value << ' ';
    }
    std::cout << '\n';

    return 0;
}
