//
// Created by marcus on 3/21/19.
//

#ifndef FOPMIXINS_EDGE_H
#define FOPMIXINS_EDGE_H


class Node;

class BaseEdge {
public:
    BaseEdge(Node &start, Node &end);

    Node& getStart();

    Node& getEnd();

private:
    void addEdgeToNodes();

    Node* start;
    Node* end;
};


#endif //FOPMIXINS_EDGE_H
