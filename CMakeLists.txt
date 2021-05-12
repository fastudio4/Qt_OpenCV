cmake_minimum_required(VERSION 3.5)

project(connection_openCV LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(SOURCE
    main.cpp
    mainwindow.cpp
    mainwindow.h
    application.cpp
    application.h
    )

find_package(Qt5 REQUIRED COMPONENTS Widgets Multimedia)
find_package(Qt5MultimediaWidgets)


find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})

add_executable(${PROJECT_NAME} ${SOURCE})

target_link_libraries(${PROJECT_NAME} PRIVATE Qt5::Widgets)
target_link_libraries(${PROJECT_NAME} PRIVATE Qt5::Multimedia)
target_link_libraries(${PROJECT_NAME} PRIVATE Qt5::MultimediaWidgets)
target_link_libraries(${PROJECT_NAME} ${OpenCV_LIB})
