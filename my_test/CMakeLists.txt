cmake_minimum_required(VERSION 3.5)

project(pw1 LANGUAGES C)
 
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wextra -g -L$HOME/local/lib -lcunit")
# set(CMAKE_LD_FLAGS "${CMAKE_LD_FLAGS} -lm")

# bring the headers into project
include_directories("include")

# add source files with wildcard
file(GLOB SOURCES "src/*.c")

add_executable(proj ${SOURCES})
#adding -lm 
target_link_libraries(proj m)
