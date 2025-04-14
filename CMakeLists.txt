cmake_minimum_required(VERSION 3.20.0)
project(my_hello
    VERSION 0.0.1
    LANGUAGES CXX
    DESCRIPTION "A simple hello world project"
    HOMEPAGE_URL "https://github.com/my_hello"
)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/bin) #Windows系统路径

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)
aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR}/src SRC_LIST)

add_executable(my_hello ${SRC_LIST})
