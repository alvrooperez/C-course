# Versión mínima de CMake
cmake_minimum_required(VERSION 3.10)

# Nombre de tu proyecto
project(BankingSystem)

# Establecer el estándar a C++20 (equivalente a -std=c++20)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Activar los warnings (equivalente a -Wall)
add_compile_options(-Wall)

# Generar el ejecutable "project" usando tus archivos fuente
add_executable(project
    Project.cpp
    Account.cpp
    Savings.cpp
    Checking.cpp
    Transaction.cpp
)