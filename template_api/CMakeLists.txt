cmake_minimum_required(VERSION 3.20)
project(template_api)

file(GLOB source_files
  src/*.cc)

add_executable(${PROJECT_NAME}
  ${source_files}
)
target_include_directories(${PROJECT_NAME}
  PUBLIC
    include/
)
