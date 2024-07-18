cmake_minimum_required(VERSION 3.28)
project(mobile_carrier)

set(CMAKE_CXX_STANDARD 23)

add_executable(mobile_carrier main.cpp
        SubscriberFee.cpp
        SubscriberFee.h
        InternationalCalls.cpp
        InternationalCalls.h
        LocalCalls.cpp
        LocalCalls.h)
