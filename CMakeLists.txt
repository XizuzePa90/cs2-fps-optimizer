cmake_minimum_required(VERSION 3.16)
project(cs2-fps-optimizer CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(cs2fpsoptimizer
    src/main.cpp
    src/configs.cpp
    src/tuner.cpp
    src/monitor.cpp
    src/cli.cpp
)

target_include_directories(cs2fpsoptimizer PRIVATE include)

if(WIN32)
    target_link_libraries(cs2fpsoptimizer PRIVATE userenv)
endif()
