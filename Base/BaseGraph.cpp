//
// Created by marcus on 3/21/19.
//

#include "BaseGraph.h"

void BaseGraph::addNode(Node *node) {
    this->nodes->push_back(node);
}

std::vector<Node *> BaseGraph::getNodes() {
    return std::vector<Node *>(*this->nodes);
}
