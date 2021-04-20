cmake_minimum_required(VERSION 3.10)

# Set the project name
# Final name will be the final binary name
project(c17-example C)

enable_testing()

# Current C17 (2017) is the current C standard
set(CMAKE_C_STANDARD 17)
set(CMAKE_C_STANDARD_REQUIRED True)

add_subdirectory(main)
add_subdirectory(libs)
add_subdirectory(tests)
