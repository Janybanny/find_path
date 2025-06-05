cmake_minimum_required(VERSION 3.0)

project(find_path)

add_executable(find_path main.cpp station.h station.cpp connection.h)

install(TARGETS find_path RUNTIME DESTINATION bin)
