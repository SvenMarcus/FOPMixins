//
// Created by marcus on 3/21/19.
//

#include "Node.h"

Node::Node(std::string &name) : name(name) {
}

std::string Node::getName() {
    return this->name;
}

void Node::addEdge(WeightedEdge &edge) {
    this->edges.push_back(edge);
}

std::vector<WeightedEdge &> Node::getEdges() {
    return std::vector<WeightedEdge &>(this->edges);
}
