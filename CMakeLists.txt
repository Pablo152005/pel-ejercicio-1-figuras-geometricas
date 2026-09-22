cmake_minimum_required(VERSION 4.3)
project(Ejercicio1FigurasGeometricas)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(Ejercicio1FigurasGeometricas
    main.cpp
    FiguraGeometrica.cpp
    Circulo.cpp
    Rectangulo.cpp
    Triangulo.cpp
)
