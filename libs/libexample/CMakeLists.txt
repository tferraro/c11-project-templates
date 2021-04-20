file(GLOB libexample_SRCS CONFIGURE_DEPENDS "*.h" "*.c")

# Declare the library
add_library(libexample STATIC ${libexample_SRCS})

# Specify here the include directories exported
# by this library
target_include_directories(libexample PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

# Setting bin as the output directory
set_target_properties(libexample
    PROPERTIES
    ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin"
    LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin"
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin"
)