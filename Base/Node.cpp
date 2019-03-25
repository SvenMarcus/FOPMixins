//
// Created by marcus on 3/21/19.
//

#include <ostream>
#include <iostream>
#include "Node.h"
#include "BaseEdge.h"

Node::Node(std::string &name) : name(name) {
}

std::string Node::getName() {
    return this->name;
}

void Node::addEdge(BaseEdge &edge) {
    this->edges.push_back(&edge);
}

std::vector<BaseEdge *> Node::getEdges() {
    return this->edges;
}
