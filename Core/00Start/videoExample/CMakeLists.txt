cmake_minimum_required(VERSION 3.14)

project(qt6cb-10-6 LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 COMPONENTS Core REQUIRED)
find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Core REQUIRED)

add_executable(qt6cb-10-6
  main.cpp
  animal.h
  animal.cpp
  test.h
  test.cpp
)
target_link_libraries(qt6cb-10-6 Qt${QT_VERSION_MAJOR}::Core)