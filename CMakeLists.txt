cmake_minimum_required(VERSION 3.20)

project(leetcode VERSION 0.1)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED true)

add_executable(
        ${PROJECT_NAME}
        "src/main.cpp"
        "src/listnode.cpp"
        "src/list_solution.cpp"
        "src/string_solution.cpp"
        "src/array_solution.cpp"
)

target_include_directories(
        ${PROJECT_NAME}
        PRIVATE
        "include"
)