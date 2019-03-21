//
// Created by marcus on 3/21/19.
//

#ifndef FOPMIXINS_EDGE_H
#define FOPMIXINS_EDGE_H

#include <utility>

template<class Edge>
class WeightedEdge : Edge {
public:
    template<typename...Args>
    explicit WeightedEdge(double weight, Args &&... args) :
            Edge(std::forward<Args>(args)...),
            weight(weight) {};

    double getWeight() {
        return weight;
    }

private:
    double weight;
};



#endif //FOPMIXINS_EDGE_H
