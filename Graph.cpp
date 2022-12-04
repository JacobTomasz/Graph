// Created by Jacob on 12/4/2022.
#include "Graph.h"

Graph::Graph(int vertices) {
    adj_lst = new list<int> [vertices];
    n=vertices;
}

void Graph::add_edge(int u, int v, bool b) {
    adj_lst[u].push_back(v);
    if (b)
        adj_lst[v].push_back(u);

}

void Graph::display() {
    for (int i=0; i<n; i++) {
        cout << i << "-->";
        for (auto j:adj_lst[i])
            cout << j << ' ';
        cout << '\n';
    }
    cout << endl;
}
