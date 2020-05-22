cmake_minimum_required (VERSION 3.8)
project (FinalTest)

set(CMAKE_POSITION_INDEPENDENT_CODE ON)

# Include cmake module ExternalProject needed to build external dependencies
include(ExternalProject)

# Enable 17 C++ standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -m64")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -m64")

if(NOT CMAKE_BUILD_TYPE)
    set (CMAKE_BUILD_TYPE Release)
endif()
if(NOT CMAKE_CONFIGURATION_TYPES)
    set (CMAKE_CONFIGURATION_TYPES Release)
endif()

# INSTALL_PREFIX MATCHES "^/usr/local" OR CMAKE_INSTALL_PREFIX MATCHES "^C:/Program Files" )
set(CMAKE_INSTALL_PREFIX ${CMAKE_CURRENT_SOURCE_DIR}/Installation)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")


# RPath folder
set(CMAKE_INSTALL_RPATH "${CMAKE_INSTALL_PREFIX}/lib")

add_subdirectory(src)
install(EXPORT task1Config DESTINATION lib)
install(EXPORT task2Config DESTINATION lib)
install(EXPORT task3Config DESTINATION lib)
install(EXPORT task4Config DESTINATION lib)
install(EXPORT task5Config DESTINATION lib)
add_subdirectory(Executable)