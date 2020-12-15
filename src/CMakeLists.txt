cmake_minimum_required(VERSION 3.10)
PROJECT(tdd-exercise CXX)

SET (SRCS main.cpp sum.cpp)
INCLUDE_DIRECTORIES("../include")

ADD_EXECUTABLE(tdd-exercise ${SRCS})
