#include <iostream>
#include "Base/Node.h"
#include "Base/BaseGraph.h"
#include "Base/BaseEdge.h"
#include "Hierholzer/HierholzerGraph.h"
#include "Weighted/WeightedEdge.h"

int main() {

    // typedef BaseGraph Graph;
    typedef HierholzerGraph<BaseGraph> Graph;

    //typedef BaseEdge Edge;
    typedef WeightedEdge<BaseEdge> Edge;


    std::string a_str("a");
    std::string b_str("b");
    std::string c_str("c");

    Node a(a_str);
    Node b(b_str);
    Node c(c_str);

    Edge ab(3, a, b);
    Edge ac(4, a, c);
    Edge bc(5, b, c);

    Graph g;
    g.addNode(&a);
    g.addNode(&b);
    g.addNode(&c);

    std::cout << g.isEulerian() << std::endl;

    std::cout << "Weight " << ab.getWeight() << std::endl;
    std::cout << "Start " << ab.getStart().getName() << std::endl;
    std::cout << "End " << ab.getEnd().getName() << std::endl;

    return 0;
}