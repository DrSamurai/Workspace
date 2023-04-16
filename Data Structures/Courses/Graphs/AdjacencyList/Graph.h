#ifndef GRAPH_H
#define GRAPH_H
#include <vector>
#include <iostream>

class Graph
{
private:
    std::vector<int> *adjList;
    int vertices;

public:
    Graph(int vertices);
    void addEdge(int src, int dest);
    void removeEdge(int src, int dest);
    void printGraph();


};

#endif