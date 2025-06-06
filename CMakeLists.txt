cmake_minimum_required(VERSION 3.28)
project(testModule)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# 启用 C++20 模块支持
set(CMAKE_EXPERIMENTAL_CXX_MODULE_CMAKE_API "2182bf5c-ef0d-489a-91da-49dbc3090d2a")
set(CMAKE_EXPERIMENTAL_CXX_MODULE_DYNDEP 1)

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