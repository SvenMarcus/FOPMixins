//
// Created by marcus on 3/21/19.
//

#ifndef FOPMIXINS_EDGE_H
#define FOPMIXINS_EDGE_H


#include "Node.h"

class Edge {
public:
    Edge(Node &start, Node &end);
    Node& getStart();
    Node& getEnd();

private:
    void addEdgeToNodes();
    Node &start;
    Node &end;
};


#endif //FOPMIXINS_EDGE_H
