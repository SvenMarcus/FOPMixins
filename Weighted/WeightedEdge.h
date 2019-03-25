//
// Created by marcus on 3/21/19.
//

#ifndef FOPMIXINS_WEDGE_H
#define FOPMIXINS_WEDGE_H

#include <utility>

template<class BaseEdge>
class WeightedEdge : public BaseEdge {
public:
    template<typename... Args>
    WeightedEdge(double weight, Args &&... args) :
            BaseEdge(std::forward<Args>(args)...),
            weight(weight) {};

    double getWeight() {
        return weight;
    }

private:
    double weight;
};


#endif //FOPMIXINS_WEDGE_H
