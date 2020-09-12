cmake_minimum_required(VERSION 3.5)

project(tcpip_abstraction LANGUAGES CXX)


set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


include_directories(${PROJECT_SOURCE_DIR}/include)

file(GLOB MY_SRC
    "*.cpp"
    "src/*.cpp"
    "include/*.h"
)

add_executable(tcpip_abstraction ${MY_SRC} )
