cmake_minimum_required (VERSION 3.8)

add_library(task2 INTERFACE)

target_include_directories(task2
       INTERFACE
       $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
       $<INSTALL_INTERFACE:include>)

file(GLOB_RECURSE HEADERS ${CMAKE_CURRENT_SOURCE_DIR}/*.hpp
                          ${CMAKE_CURRENT_SOURCE_DIR}/*.h)

install(TARGETS task2  EXPORT task2Config DESTINATION lib)

install(FILES ${HEADERS} DESTINATION include)