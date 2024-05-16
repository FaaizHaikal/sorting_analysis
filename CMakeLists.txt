cmake_minimum_required(VERSION 3.10)

project(sorting_analysis)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_library(${PROJECT_NAME} STATIC
  "src/${PROJECT_NAME}/sorting.cpp"
  "src/${PROJECT_NAME}/insertion_sort.cpp"
  "src/${PROJECT_NAME}/merge_sort.cpp"
  "src/${PROJECT_NAME}/heap_sort.cpp"
  "src/${PROJECT_NAME}/quick_sort.cpp"
  "src/${PROJECT_NAME}/counting_sort.cpp"
)

target_include_directories(${PROJECT_NAME} PUBLIC
  "include"
)

add_executable(main "src/main.cpp")
target_link_libraries(main PUBLIC ${PROJECT_NAME})
target_include_directories(main PUBLIC
  "include"
)
