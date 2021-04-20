file(GLOB libexample_SRCS CONFIGURE_DEPENDS "*.h" "*.c")

# Declare the library
add_library(libexample STATIC ${libexample_SRCS})

# Specify here the include directories exported
# by this library
target_include_directories(libexample PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})