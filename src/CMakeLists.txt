cmake_minimum_required(VERSION 3.5)

add_executable(untitled main.cpp ${MY_INCLUDE_DIR}/figure.h figure.cpp ${MY_INCLUDE_DIR}/circle.h circle.cpp
${MY_INCLUDE_DIR}/triangle.h triangle.cpp ${MY_INCLUDE_DIR}/square.h square.cpp ${MY_INCLUDE_DIR}/rectangle.h rectangle.cpp)

target_include_directories(untitled PUBLIC ${MY_INCLUDE_DIR})
