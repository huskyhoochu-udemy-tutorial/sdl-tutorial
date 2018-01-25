cmake_minimum_required(VERSION 3.9)
project(SDL_project)

set(CMAKE_CXX_STANDARD 17)

find_package(SDL2 REQUIRED)
include_directories(/usr/local/Cellar/sdl2/2.0.7/include/SDL2)

add_executable(SDL_project main.cpp)
target_link_libraries(SDL_project /usr/local/Cellar/sdl2/2.0.7/lib/libSDL2-2.0.0.dylib)