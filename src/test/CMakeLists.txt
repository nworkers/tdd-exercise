cmake_minimum_required(VERSION 3.10)
PROJECT(tdd-exercise-test CXX)

SET (SRCS ./test_main.cpp ./test_sum.cpp ../sum.cpp)
INCLUDE_DIRECTORIES("../../include")

ADD_EXECUTABLE(tdd-exercise-test ${SRCS})
target_link_libraries(tdd-exercise-test
  gtest_main
  gtest
  pthread
)
