# @file CMakeLists.txt
# 
# CMake files for functional decomposition examples

cmake_minimum_required(VERSION 3.10)

# project info
project(CountArticles)

# C++17 standard
set(CMAKE_CXX_STANDARD 17)

# CountArticles application
add_executable(CountArticles CountArticles.cpp PDFReader.cpp)

# Example run command
add_custom_target(run
        COMMENT "Run example"
        COMMAND cmake -E echo "the" | ./CountArticles
        DEPENDS CountArticles
        USES_TERMINAL
        WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
)
