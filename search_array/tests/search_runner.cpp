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

#if defined(SEARCH_VARIANT_HASH_SEARCH)
    HashTable hash_table(static_cast<int>(nums.size()));
    for (const int value : nums) {
        hash_table.insert(value);
    }
    const bool result = hash_table.search(target);

    std::cout << SEARCH_NAME << ": " << std::boolalpha << result << '\n';
#else
    Solution solution;
#if defined(SEARCH_VARIANT_BINARY_SEARCH)
    const int result = solution.binary_search(nums, target);
#else
    const int result = solution.search(nums, target);
#endif

    std::cout << SEARCH_NAME << ": " << result << '\n';
#endif

    return 0;
}
