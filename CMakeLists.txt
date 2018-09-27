cmake_minimum_required(VERSION 3.9)
project(Plugin)

set(CMAKE_CXX_STANDARD 11)
SET(SRC_LIST  main.cpp ./src/derivedclass.cpp
        ./src/dynclass.cpp
        ./src/pentagon_hexagon.cpp
        ./src/pluginhelper.cpp)

add_executable(Plugin ${SRC_LIST})
target_link_libraries(Plugin ${CMAKE_DL_LIBS})