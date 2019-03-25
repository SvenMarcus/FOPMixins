//
// Created by marcus on 3/21/19.
//

#ifndef FOPMIXINS_NODE_H
#define FOPMIXINS_NODE_H


#include <string>
#include <vector>

class BaseEdge;

class Node {
public:
    explicit Node(std::string &name);

    std::string getName();

    void addEdge(BaseEdge &);

    std::vector<BaseEdge *> getEdges();

private:
    std::string name;
    std::vector<BaseEdge *> edges;

};


#endif //FOPMIXINS_NODE_H
