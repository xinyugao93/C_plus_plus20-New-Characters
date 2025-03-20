cmake_minimum_required(VERSION 3.28)
project(testModule)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_EXPERIMENTAL_CXX_MODULE_CMAKE_API "3c375311-a3c9-4396-a187-3227ef642046")

add_executable(${PROJECT_NAME})
target_sources(${PROJECT_NAME} 
    PUBLIC 
    main.cpp
)

if(TEST_MODULE STREQUAL "on")
    add_compile_definitions(TEST_MODULE)
    message(STATUS "TEST_MODULE is ON")
    target_sources(${PROJECT_NAME}
        PUBLIC
        testModule.cpp
    )

    target_sources(${PROJECT_NAME} 
        PUBLIC
            FILE_SET cxx_modules TYPE CXX_MODULES FILES
            testModule.cppm
    )
elseif(TEST_CONCEPTS STREQUAL "on")
    add_compile_definitions(TEST_CONCEPTS)
    message(STATUS "TEST_CONCEPTS is ON")
    target_sources(${PROJECT_NAME}
        PUBLIC
        testConcepts.cpp
    )
endif()