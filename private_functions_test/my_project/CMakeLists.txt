project(my_project)
cmake_minimum_required(VERSION 3.15)

file(GLOB source_files
    src/*.cpp
)

add_library(${PROJECT_NAME}
    SHARED
        ${source_files}
)
target_include_directories(${PROJECT_NAME}
    PUBLIC
        include/public/
    PRIVATE
        include/private/
)

add_library(${PROJECT_NAME}_test
    SHARED
        ${source_files}
)
target_include_directories(${PROJECT_NAME}_test
    PUBLIC
        include/public/
        include/private/
)
