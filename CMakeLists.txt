cmake_minimum_required(VERSION 4.3)

project(StatFighter)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_executable(StatFighter
"src/main.cpp"
"src/app/application.h"
"src/app/application.cpp"
"src/game/game.h"
"src/game/game.cpp"
)

find_package(raylib CONFIG REQUIRED)
find_package(EnTT CONFIG REQUIRED)

target_link_libraries(StatFighter PRIVATE raylib EnTT::EnTT)
