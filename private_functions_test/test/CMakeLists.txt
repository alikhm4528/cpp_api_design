project(test_my_project)
cmake_minimum_required(VERSION 3.15)

include(FetchContent)

if(NOT TARGET gtest)
  FetchContent_Declare(
    GoogleTestContent
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG v1.12.0
  )
  FetchContent_GetProperties(GoogleTestContent)
  if(NOT googletestcontent_POPULATED)
    FetchContent_Populate(GoogleTestContent)
    add_subdirectory(
      ${googletestcontent_SOURCE_DIR}
      ${googletestcontent_BINARY_DIR}
      EXCLUDE_FROM_ALL
    )
  endif()
endif()

file(GLOB source_files
    src/*.cpp
)

add_executable(${PROJECT_NAME}
    ${source_files}
)
target_link_libraries(${PROJECT_NAME}
    PRIVATE
        my_project_test
        GTest::gtest_main
)