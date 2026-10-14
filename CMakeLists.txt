cmake_minimum_required(VERSION 3.21)

project(Vitrum
    VERSION 0.1.0
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

find_package(Qt6 REQUIRED COMPONENTS Core Gui Qml Quick)

# Phase 1a: the shell, as layer-shell clients. The custom compositor
# (Phase 1b) lives here later.
add_subdirectory(shell)
