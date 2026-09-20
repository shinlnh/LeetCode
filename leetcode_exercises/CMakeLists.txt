cmake_minimum_required(VERSION 3.20)

project(leetcode_exercises LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Moi bai LeetCode la mot executable rieng de cac bai co the dung chung
# ten class Solution va giu nguyen method signature cua LeetCode.
set(LEETCODE_EXERCISES
    p0001_two_sum
    p0121_best_time_to_buy_and_sell_stock
    p0238_product_of_array_except_self
    p0011_container_with_most_water
    p0053_maximum_subarray
)

foreach(exercise IN LISTS LEETCODE_EXERCISES)
    string(TOUPPER "${exercise}" exercise_upper)

    add_executable(${exercise}
        src/${exercise}.cpp
        tests/exercise_runner.cpp
    )

    target_include_directories(${exercise} PRIVATE inc)

    target_compile_definitions(${exercise} PRIVATE
        EXERCISE_HEADER="${exercise}.hpp"
        EXERCISE_NAME="${exercise}"
        EXERCISE_VARIANT_${exercise_upper}
    )

    if(MSVC)
        target_compile_options(${exercise} PRIVATE /W4 /permissive-)
    else()
        target_compile_options(${exercise} PRIVATE -Wall -Wextra -Wpedantic)
    endif()
endforeach()
