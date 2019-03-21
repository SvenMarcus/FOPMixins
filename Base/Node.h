//
// Created by marcus on 3/21/19.
//

#ifndef FOPMIXINS_NODE_H
#define FOPMIXINS_NODE_H


#include <string>
#include <vector>
#include "Edge.h"

class Node {
public:
    explicit Node(std::string &name);
    std::string getName();
    void addEdge(WeightedEdge&);
    std::vector<WeightedEdge&> getEdges();

private:
    std::string name;
    std::vector<WeightedEdge&> edges;

};


#endif //FOPMIXINS_NODE_H
