#!/bin/sh
# simple build script, feel free to modify or convert it
# to your favourite build system config

#gcc -c c_file_stub.c
#g++ -std=c++11 -c cpp_file_stub.cpp

g++ -std=c++11 -c \
    -I. -I../mylib-test-arduino -I../../src -I$HOME/Arduino/libraries/sput-ino/src \
    Arduino.cpp \
    ../../src/mylib.cpp \
    ../mylib-test-arduino/mylib-test.cpp \
    mylib-test-main.cpp
g++ *.o -o mylib_test

