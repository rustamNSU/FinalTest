cmake_minimum_required (VERSION 3.8)

add_library(task3 INTERFACE)

target_include_directories(task3
       INTERFACE
       $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
       $<INSTALL_INTERFACE:include>)

file(GLOB_RECURSE HEADERS ${CMAKE_CURRENT_SOURCE_DIR}/*.hpp
                          ${CMAKE_CURRENT_SOURCE_DIR}/*.h)

install(TARGETS task3  EXPORT task3Config DESTINATION lib)

install(FILES ${HEADERS} DESTINATION include)