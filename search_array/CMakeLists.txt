cmake_minimum_required(VERSION 3.20)

project(search_array LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Moi thuat toan la mot executable rieng. Nho vay tat ca cac cap file
# deu co the dung dung ten class Solution nhu tren LeetCode.
set(SEARCH_ALGORITHMS
    linear_search
    binary_search
    hash_search
)

foreach(algorithm IN LISTS SEARCH_ALGORITHMS)
    add_executable(${algorithm}
        src/${algorithm}.cpp
        tests/search_runner.cpp
    )

    target_include_directories(${algorithm} PRIVATE inc)

    # Runner dung macro nay de include header dung voi tung executable.
    target_compile_definitions(${algorithm} PRIVATE
        SEARCH_HEADER="${algorithm}.hpp"
        SEARCH_NAME="${algorithm}"
    )

    if(MSVC)
        target_compile_options(${algorithm} PRIVATE /W4 /permissive-)
    else()
        target_compile_options(${algorithm} PRIVATE -Wall -Wextra -Wpedantic)
    endif()
endforeach()
