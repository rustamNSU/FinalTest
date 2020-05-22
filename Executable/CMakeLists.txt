cmake_minimum_required(VERSION 3.8)

project(Executable)
#file(GLOB_RECURSE SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp)
#include_directories(${CMAKE_CURRENT_SOURCE_DIR})


add_executable(appTask1 ${CMAKE_CURRENT_SOURCE_DIR}/task1.cpp)
target_link_libraries (appTask1 task1)
install (TARGETS appTask1 DESTINATION bin)

add_executable(appTask2 ${CMAKE_CURRENT_SOURCE_DIR}/task2.cpp)
target_link_libraries (appTask2 task2)
install (TARGETS appTask2 DESTINATION bin)

add_executable(appTask3 ${CMAKE_CURRENT_SOURCE_DIR}/task3.cpp)
target_link_libraries (appTask3 task3)
install (TARGETS appTask3 DESTINATION bin)

add_executable(appTask4 ${CMAKE_CURRENT_SOURCE_DIR}/task4.cpp)
target_link_libraries (appTask4 task4)
install (TARGETS appTask4 DESTINATION bin)

add_executable(appTask5 ${CMAKE_CURRENT_SOURCE_DIR}/task5.cpp)
target_link_libraries (appTask5 task5)
install (TARGETS appTask5 DESTINATION bin)