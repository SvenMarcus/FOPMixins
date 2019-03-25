cmake_minimum_required(VERSION 3.13)
project(FOPMixins)

set(CMAKE_CXX_STANDARD 14)

add_executable(FOPMixins
        main.cpp
        Base/Node.h
        Base/BaseGraph.h
        Base/BaseEdge.h
        Base/BaseEdge.cpp
        Base/Node.cpp
        Base/BaseGraph.cpp
        Weighted/WeightedEdge.h
        Hierholzer/HierholzerGraph.h
        )