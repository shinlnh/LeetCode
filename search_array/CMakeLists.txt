cmake_minimum_required(VERSION 3.20)

project(search_array LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Moi thuat toan la mot executable rieng de moi cach cai dat co the dung
# giao dien rieng ma khong xung dot ten.
set(SEARCH_ALGORITHMS
    linear_search
    binary_search
    hash_search
)

foreach(algorithm IN LISTS SEARCH_ALGORITHMS)
    string(TOUPPER "${algorithm}" algorithm_upper)

    add_executable(${algorithm}
        src/${algorithm}.cpp
        tests/search_runner.cpp
    )

    target_include_directories(${algorithm} PRIVATE inc)

    # Runner dung macro nay de include header dung voi tung executable.
    target_compile_definitions(${algorithm} PRIVATE
        SEARCH_HEADER="${algorithm}.hpp"
        SEARCH_NAME="${algorithm}"
        SEARCH_VARIANT_${algorithm_upper}
    )

    if(MSVC)
        target_compile_options(${algorithm} PRIVATE /W4 /permissive-)
    else()
        target_compile_options(${algorithm} PRIVATE -Wall -Wextra -Wpedantic)
    endif()
endforeach()
