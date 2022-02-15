cmake_minimum_required(VERSION 3.15)

project(cmake-cpp-modules-example)

include(std_modules.cmake)

add_executable(${PROJECT_NAME}
    bar.cpp
    foo.cpp
    main.cpp
)

set_property(TARGET ${PROJECT_NAME} PROPERTY CXX_STANDARD 20)

target_compile_options(${PROJECT_NAME} PRIVATE -fmodules-ts)

# Build std_modules before target which use std libraries.
add_dependencies(${PROJECT_NAME} std_modules)

set_directory_properties(PROPERTIES ADDITIONAL_CLEAN_FILES "gcm.cache")
