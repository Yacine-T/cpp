cmake_minimum_required(VERSION 3.16)

# set the project name
project(cartesian_vectors_variables)

# add the lib
add_library(mysource SHARED vector.cpp)

# add_library(myconfig SHARED config.h)
# add another
#add_library(mysource_2 SHARED sources_2.cpp)

# add the executable
add_executable(main main.cc)

# do not forget to link
target_link_libraries(main mysource)

# target_link_libraries(main myconfig)