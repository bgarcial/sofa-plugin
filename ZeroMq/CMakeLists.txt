cmake_minimum_required(VERSION 3.1)
project(ZeroMq)

set(HEADER_FILES
    Client.h
)

set(SOURCE_FILES
    Client.cpp
    main.cpp
)

set(README_FILES README.md)

find_package(SofaFramework REQUIRED)

add_library(${PROJECT_NAME} SHARED ${HEADER_FILES} ${SOURCE_FILES})
target_link_libraries(${PROJECT_NAME} SofaCore)
set_target_properties(${PROJECT_NAME} PROPERTIES COMPILE_FLAGS "-DSOFA_BUILD_ZEROMQ")

install(TARGETS ZeroMq
        RUNTIME DESTINATION bin
        LIBRARY DESTINATION lib
        ARCHIVE DESTINATION lib)
