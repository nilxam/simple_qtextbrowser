cmake_minimum_required(VERSION 2.8.11)

project(test)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)

find_package(Qt5Widgets)
add_executable(simple_qtextbrowser main.cpp)
target_link_libraries(simple_qtextbrowser Qt5::Widgets)
