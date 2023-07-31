# CMakeList.txt : CMake project for ComplexNumbers, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project (mandelbrot)

set(SOURCES
	src/Bitmap.cpp
	src/main.cpp
	src/Mandelbrot.cpp
    src/ZoomList.cpp
	src/FractalCreator.cpp
	src/RGB.cpp
	)

add_executable(mandelbrot ${SOURCES})


target_include_directories(mandelbrot
    PRIVATE 
        ${PROJECT_SOURCE_DIR}/include
)