//
// Created by marcus on 3/21/19.
//

#include "Graph.h"

void Graph::addNode(Node &node) {
    this->nodes.push_back(node);
}

std::vector<Node &> Graph::getNodes() {
    return std::vector<Node &>(this->nodes);
}
