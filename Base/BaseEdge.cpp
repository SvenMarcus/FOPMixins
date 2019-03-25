//
// Created by marcus on 3/21/19.
//

#include "BaseEdge.h"
#include "Node.h"

BaseEdge::BaseEdge(Node &start, Node &end) : start(&start), end(&end) {
    addEdgeToNodes();
}

Node& BaseEdge::getStart() {
    return *start;
}

Node& BaseEdge::getEnd() {
    return *end;
}

void BaseEdge::addEdgeToNodes() {
   start->addEdge(*this);
   end->addEdge(*this);
}
