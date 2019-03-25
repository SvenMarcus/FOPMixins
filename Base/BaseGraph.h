//
// Created by marcus on 3/21/19.
//

#ifndef FOPMIXINS_GRAPH_H
#define FOPMIXINS_GRAPH_H


#include <vector>

class Node;

class BaseGraph {
public:
    BaseGraph() = default;

    void addNode(Node*);

    std::vector<Node *> getNodes();

private:
    std::vector<Node *> *nodes = new std::vector<Node *>();
};


#endif //FOPMIXINS_GRAPH_H
