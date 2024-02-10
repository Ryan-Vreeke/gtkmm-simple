cmake_minimum_required(VERSION 3.10)
project(my_gtkmm_app)

# Find GTKMM
find_package(PkgConfig REQUIRED)
pkg_check_modules(GTKMM REQUIRED gtkmm-3.0)

# Compiler options
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Include directories
include_directories(${GTKMM_INCLUDE_DIRS} ${CMAKE_SOURCE_DIR}/include)
link_directories(${GTKMM_LIBRARY_DIRS})

# Source files
set(SOURCES src/main.cpp)

# Executable
add_executable(my_gtkmm_app ${SOURCES})

# Link GTKMM
target_link_libraries(my_gtkmm_app ${GTKMM_LIBRARIES})
