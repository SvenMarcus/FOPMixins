//
// Created by marcus on 3/21/19.
//

#ifndef FOPMIXINS_HIERHOLZERGRAPH_H
#define FOPMIXINS_HIERHOLZERGRAPH_H

#include <vector>
#include <map>
#include "../Base/Node.h"

template<class Graph>
class HierholzerGraph : Graph {
public:
    HierholzerGraph() : Graph() {};

    bool isEulerian() {
        std::vector<Node &> nodes = Graph::getNodes();
        for (Node &node : nodes) {
            if (node % 2 != 0)
                return false;
        }

        return true;
    }

    void addNode(Node &node) {

    }

    std::vector<Node &> findEulerTour() {
        if (!isEulerian())
            return {};

    }

private:
    std::map<Edge, bool> knownEdges = std::map<Edge, bool>();


};


#endif //FOPMIXINS_HIERHOLZERGRAPH_H
