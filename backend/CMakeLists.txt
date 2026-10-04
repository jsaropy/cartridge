cmake_minimum_required(VERSION 3.20)
project(cartridge LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(OpenCV REQUIRED)

add_executable(cartridge src/main.cpp)
target_link_libraries(cartridge PRIVATE ${OpenCV_LIBS})
