//
// Created by marcus on 3/21/19.
//

#ifndef FOPMIXINS_GRAPH_H
#define FOPMIXINS_GRAPH_H


#include <vector>
#include "Node.h"

class Graph {
public:
    Graph() = default;
    void addNode(Node&);
    std::vector<Node&> getNodes();

private:
    std::vector<Node &> nodes;
};


#endif //FOPMIXINS_GRAPH_H
