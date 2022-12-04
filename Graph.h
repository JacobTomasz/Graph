// Created by Jacob on 12/4/2022.
#pragma once
#include <iostream>
#include <list>
using namespace std;


class Graph {
private:
    list<int> *adj_lst;
    int n;
public:
    explicit Graph(int v);
    void add_edge(int u, int v, bool b);
    void display();
};

