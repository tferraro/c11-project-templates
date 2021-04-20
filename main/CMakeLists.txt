file(GLOB Main_SRCS CONFIGURE_DEPENDS "*.h" "*.c")

add_executable(main ${Main_SRCS})

# Specify here the libraries this program depends on
target_link_libraries(main
pthread
libexample
)

# Setting bin as the output directory
set_target_properties(main
    PROPERTIES
    ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin"
    LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin"
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin"
)

# Command to run
add_custom_target(run COMMAND "${CMAKE_BINARY_DIR}/bin/main")