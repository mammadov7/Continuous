cmake_minimum_required(VERSION 3.0)

project(tp_area LANGUAGES C)


add_executable(testing "")
target_sources(testing PUBLIC func.c func.h test_prog.c )
target_link_libraries(testing PUBLIC cuint m)

enable_testing()
add_test(Test1 testing)
