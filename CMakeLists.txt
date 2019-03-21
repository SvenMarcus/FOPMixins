cmake_minimum_required(VERSION 3.13)
project(FOPMixins)

set(CMAKE_CXX_STANDARD 14)

add_executable(FOPMixins main.cpp Base/Graph.cpp Base/Graph.h Base/Node.cpp Base/Node.h Base/Edge.cpp Base/Edge.h Weighted/WeightedEdge.h Hierholzer/HierholzerGraph.cpp Hierholzer/HierholzerGraph.h)