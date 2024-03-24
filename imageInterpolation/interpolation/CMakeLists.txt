cmake_minimum_required(VERSION 3.5)

project(interpolation LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(interpolation main.cpp interpolationengine.h interpolationengine.cpp)

install(TARGETS interpolation
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
