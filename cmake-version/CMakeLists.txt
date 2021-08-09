message("gcc Found:${CMAKE_C_COMPILER}")
message("g++ Found:${CMAKE_CXX_COMPILER}")
cmake_minimum_required (VERSION 3.5)
project(main)


#Set .cpp files here set(SOURCES main.cpp test1.cpp test2.cpp ...)
set(SOURCES main.cpp )

#add local pybind11 directory
add_subdirectory(pybind11)

#find python3-dev package
find_package(Python COMPONENTS Interpreter Development)

#add include directories here that will be converted as -Ipath/to/includes
set(INCLUDES pybind11/include /usr/include/python3.6)
#add lib directories here that will be converted as -Lpath/to/lib
set(LIBS /usr/lib/x86_64-linux-gnu/libpython3.6m.so)

#set where to write the executable, equivalent in Makefile is -o
set(EXECUTABLE_OUTPUT_PATH ../)

include_directories(${INCLUDES})
add_executable(main ${SOURCES})

#-lpython3.6m -lpybind11 ...
target_link_libraries(main ${LIBS})
