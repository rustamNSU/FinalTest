cmake_minimum_required (VERSION 3.8)

add_library(task4 INTERFACE)

target_include_directories(task4
       INTERFACE
       $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
       $<INSTALL_INTERFACE:include>)

file(GLOB_RECURSE HEADERS ${CMAKE_CURRENT_SOURCE_DIR}/*.hpp
                          ${CMAKE_CURRENT_SOURCE_DIR}/*.h)

install(TARGETS task4  EXPORT task4Config DESTINATION lib)

install(FILES ${HEADERS} DESTINATION include)