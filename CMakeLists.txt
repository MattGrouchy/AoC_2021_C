set (CMAKE_CXX_STANDARD 11)
cmake_minimum_required(VERSION 3.0.0)
project(AoC_2021 VERSION 0.1.0)

include(CTest)
enable_testing()

# Specify what files need to be included
set(my_includes include/day1_1.h include/day2_1.h include/txt_read_write.h ) 
set(my_cpps include/day1_1.cpp include/day2_1.cpp include/txt_read_write.cpp )

# configuring dependant txt files. This will copy the txt file as a dependant. The file has to be opened without a path.
# ex fstream something("day2.txt");
configure_file(${CMAKE_CURRENT_SOURCE_DIR}/assets/day2.txt
    ${CMAKE_CURRENT_BINARY_DIR} COPYONLY)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

add_executable(AoC_2021 main.cpp ${my_cpps} ${my_includes})







