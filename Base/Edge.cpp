//
// Created by marcus on 3/21/19.
//

#include "Edge.h"

Edge::Edge(Node &start, Node &end) : start(start), end(end) {
    addEdgeToNodes();
}

Node& Edge::getStart() {
    return start;
}

Node& Edge::getEnd() {
    return end;
}

void Edge::addEdgeToNodes() {
    start.addEdge(this);
    end.addEdge(this);
}
