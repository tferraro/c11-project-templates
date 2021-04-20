file(GLOB Main_SRCS CONFIGURE_DEPENDS "*.h" "*.c")

add_executable(main ${Main_SRCS})

# Specify here the libraries this program depends on
target_link_libraries(main
pthread
libexample
)

install(TARGETS main DESTINATION bin)