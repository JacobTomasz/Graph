#include <iostream>
#include "Graph.h"
using namespace std;

int main() {
    Graph g(4);
    g.add_edge(0,1,true);
    g.add_edge(0,2,true);
    g.add_edge(2,3,true);
    g.add_edge(1,2,true);
    g.display();
    return 0;
}
