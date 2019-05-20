project(testhpp)

SET(CMAKE_CXX_FLAGS ${CMAKE_CXX_FLAGS} "-std=c++11 -pthread -O0")
set(SRC class1.cpp test.cpp class1.h function1.h function1.cpp function2.h function2.cpp)

add_executable(testhpp ${SRC})