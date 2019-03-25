//
// Created by marcus on 3/21/19.
//

#ifndef FOPMIXINS_HIERHOLZERGRAPH_H
#define FOPMIXINS_HIERHOLZERGRAPH_H

#include <vector>
#include <map>
#include "../Base/Node.h"
#include "../Base/BaseEdge.h"

template<class Graph>
class HierholzerGraph : public Graph {
public:
    HierholzerGraph() : Graph() {};

    bool isEulerian() {
        std::vector<Node *> nodes = Graph::getNodes();
        for (Node *node : nodes) {
            auto edges = node->getEdges();
            auto size = edges->size();
            if (size % 2 != 0)
                return false;
        }

        return true;
    }

    void addNode(Node *node) {
        Graph::addNode(node);
    }

};


#endif //FOPMIXINS_HIERHOLZERGRAPH_H
