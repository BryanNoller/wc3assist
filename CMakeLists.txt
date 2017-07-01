cmake_minimum_required (VERSION 2.6)
project (wc3assist)

set(SOURCES main.cpp util.cpp offsets.cpp game.cpp wc3.cpp jass.cpp)
add_library(wc3assist SHARED ${SOURCES})

find_package(PythonLibs REQUIRED)
include_directories(${PYTHON_INCLUDE_DIRS})
target_link_libraries(wc3assist ${PYTHON_LIBRARIES})
