cmake_minimum_required(VERSION 3.5)

project(SimpleQtServer LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt5 REQUIRED COMPONENTS Core Network)

add_executable(SimpleQtServer
  main.cpp
  server.cpp
  server.h
)
target_link_libraries(SimpleQtServer PRIVATE Qt5::Network Qt5::Core)
