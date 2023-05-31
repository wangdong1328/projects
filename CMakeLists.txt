# cmake 最小版本
cmake_minimum_required(VERSION 3.10) 

# 项目名称和版本
project(projects VERSION 0.0.0.1)

# 设置C++版本
set(CMAKE_CXX_STANDARD 11)

set(CMAKE_CXX_STANDARD_REQUIRED on)

# 添加子项目
# add_subdirectory(StudentManager)

add_subdirectory(examples_boost)




