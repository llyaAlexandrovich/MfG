cmake_minimum_required(VERSION 3.31 FATAL_ERROR)

set(MFG_VERSION "1.0.0")
project(mfg VERSION ${MFG_VERSION} LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/..")
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/..")


set(FETCHCONTENT_UPDATES_DISCONNECTED ON CACHE BOOL "" FORCE)


add_library(mfg SHARED src/mfg.cpp)


target_include_directories(mfg PUBLIC 
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_BINARY_DIR}>
    PRIVATE src
)

set_target_properties(mfg PROPERTIES INTERPROCEDURAL_OPTIMIZATION_RELEASE TRUE)

target_link_options(mfg PRIVATE -static-libgcc -static-libstdc++ -Wl,-s)
target_compile_options(mfg PRIVATE -O3)

include(GenerateExportHeader)
generate_export_header(mfg)


include(CTest)
if(BUILD_TESTING)
    include(FetchContent)
    FetchContent_Declare(
        googletest
        GIT_REPOSITORY https://github.com/google/googletest.git
        GIT_TAG        v1.14.0
    )
    set(INSTALL_GTEST OFF CACHE BOOL "" FORCE)
    FetchContent_MakeAvailable(googletest)

    add_executable(mfg_test tests/test.cpp)
    target_link_libraries(mfg_test PRIVATE gtest_main mfg)
    
    add_test(NAME mfg_unit_tests COMMAND mfg_test)
endif()
