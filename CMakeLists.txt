cmake_minimum_required(VERSION 3.10)
project(FUP)

set(CMAKE_CXX_STANDARD 11)

add_executable(FUP main.cpp Matrices/bingo.cpp Matrices/magicSquare.cpp Matrices/sumElementsOnMatrix.cpp Matrices/matrixMultiplication.cpp Matrices/symmetricMatrix.cpp Pointers/aluno.cpp Pointers/engine.cpp Pointers/testes.cpp Vectors/sumElementsOnVector.cpp)