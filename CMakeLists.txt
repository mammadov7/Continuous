cmake_minimum_required(VERSION 3.0)

project(tp_area LANGUAGES C)

set(CMAKE_INSTALL_RPATH ${CMAKE_INSTALL_PREFIX}/lib)

# put the name of lib directory in a var
set (RECT_DIR RectLib)

# tell cmake to compile the lib
add_subdirectory(${RECT_DIR})

add_executable(${PROJECT_NAME} "")
target_sources(${PROJECT_NAME} PUBLIC main.c )
target_link_libraries(${PROJECT_NAME} PUBLIC Rect)
target_include_directories(${PROJECT_NAME} PUBLIC ${RECT_DIR})

install(TARGETS ${PROJECT_NAME} RUNTIME DESTINATION bin)


add_executable(testing "")
target_sources(testing PUBLIC func.c func.h test_prog.c )
target_link_libraries(testing PUBLIC cuint m)

include (InstallRequiredSystemLibraries)

set (CPACK_RESOURCE_FILE_LICENSE "${CMAKE_CURRENT_SOURCE_DIR}/License.txt")
set (CPACK_PACKAGE_VERSION_MAJOR 0)
set (CPACK_PACKAGE_VERSION_MINOR 5)
include (CPack)
