#TODO read cmakelists reference to undertand this, this is AI slop
cmake_minimum_required(VERSION 3.20)
project(cartridge LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(OpenCV REQUIRED)

file(GLOB_RECURSE APP_SOURCES CONFIGURE_DEPENDS src/*.cpp)

add_executable(cartridge ${APP_SOURCES})

target_include_directories(cartridge PRIVATE src)
target_include_directories(cartridge PRIVATE inc)

target_link_libraries(cartridge PRIVATE ${OpenCV_LIBS})

