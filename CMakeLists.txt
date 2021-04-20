cmake_minimum_required(VERSION 3.16)

# Set the project name
# Final name will be the final binary name
project(c17-example C)

enable_testing()

# Let's use C11 (2011) as C standard
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED True)

add_subdirectory(main)
add_subdirectory(libs)
add_subdirectory(tests)
