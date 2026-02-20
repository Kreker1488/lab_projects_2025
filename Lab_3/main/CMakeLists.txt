cmake_minimum_required(VERSION 3.16)
project(main)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)

find_package(Qt6 REQUIRED COMPONENTS Widgets)

add_executable(main
    main.cpp
    mainwindow.cpp
    mainwindow.h
    mainwindow.ui
)

target_include_directories(main PRIVATE "C:/Git/lab_projects_2025/Lab_3/Logger")
target_link_directories(main PRIVATE "C:/Git/lab_projects_2025/Lab_3/build/Desktop-Debug/Logger")
target_link_libraries(main PRIVATE Qt6::Widgets Logger)

add_custom_command(TARGET main POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_if_different
        "C:/Git/lab_projects_2025/Lab_3/Logger/build/Desktop-Debug/Logger.dll"   # откуда
        $<TARGET_FILE_DIR:main>                               # куда
)
