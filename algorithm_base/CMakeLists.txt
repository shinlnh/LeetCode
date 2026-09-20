cmake_minimum_required(VERSION 3.20)

project(algorithm_base LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Moi thuat toan la mot executable rieng de cac file co the dung chung
# ten class Solution ma khong xung dot voi nhau.
set(BASE_ALGORITHMS
    find
    lower_bound
    upper_bound
    min_element
    max_element
    count
    reverse
    unique
)

foreach(algorithm IN LISTS BASE_ALGORITHMS)
    string(TOUPPER "${algorithm}" algorithm_upper)

    add_executable(${algorithm}
        src/${algorithm}.cpp
        tests/algorithm_runner.cpp
    )

    target_include_directories(${algorithm} PRIVATE inc)

    target_compile_definitions(${algorithm} PRIVATE
        ALGORITHM_HEADER="${algorithm}.hpp"
        ALGORITHM_NAME="${algorithm}"
        ALGORITHM_VARIANT_${algorithm_upper}
    )

    if(MSVC)
        target_compile_options(${algorithm} PRIVATE /W4 /permissive-)
    else()
        target_compile_options(${algorithm} PRIVATE -Wall -Wextra -Wpedantic)
    endif()
endforeach()
