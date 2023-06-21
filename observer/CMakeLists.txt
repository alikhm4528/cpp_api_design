cmake_minimum_required(VERSION 3.15.0)
project(observer)

file(GLOB source_files
    src/*.cpp
)

add_executable(${PROJECT_NAME} ${source_files})
target_include_directories(${PROJECT_NAME}
    PRIVATE
        include/
)