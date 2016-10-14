cmake_minimum_required(VERSION 2.8.9)
project(Arbol_Binario)

include_directories(include)

set(SOURCES src/NodoA.cpp src/ArbolP.cpp src/main.cpp)

add_executable(Arbol_Binario ${SOURCES})
