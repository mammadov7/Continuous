cmake_minimum_required(VERSION 3.0)

project(Rect LANGUAGES C)

add_library(${PROJECT_NAME} SHARED "")
target_sources(${PROJECT_NAME} PRIVATE  point.c circle.c rectangle.c point.h circle.h rectangle.h)
target_link_libraries(${PROJECT_NAME} PRIVATE  m)

install(TARGETS ${PROJECT_NAME} LIBRARY DESTINATION lib)
install(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/
	DESTINATION include
	FILES_MATCHING PATTERN "*.h"
)