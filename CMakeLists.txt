cmake_minimum_required(VERSION 3.0.0)
project(modern_cpp_challenge VERSION 0.1.0)

include(CTest)
enable_testing()

#add_executable(modern_cpp_challenge problem1.cpp)
add_executable(modern_cpp_challenge problem2.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
