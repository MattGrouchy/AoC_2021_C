cmake_minimum_required(VERSION 3.0.0)
project(AoC_2021 VERSION 0.1.0)

include(CTest)

enable_testing()

set(my_includes includes/day1_1.h) 
set(my_cpps main.cpp includes/day1_1.cpp)
add_executable(AoC_2021 ${my_cpps} ${my_includes})
include_directories(include)
set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)




