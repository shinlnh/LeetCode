#include <iostream>
#include <vector>

#ifndef SEARCH_HEADER
#error "SEARCH_HEADER must be defined by CMake"
#endif

#ifndef SEARCH_NAME
#define SEARCH_NAME "unknown_search"
#endif

#include SEARCH_HEADER

int main() {
    std::vector<int> nums{-1, 0, 3, 5, 9, 12};
    const int target = 9;

    Solution solution;
    const int result = solution.search(nums, target);

    std::cout << SEARCH_NAME << ": " << result << '\n';

    return 0;
}
