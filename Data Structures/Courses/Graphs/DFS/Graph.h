#ifndef GRAPH_H
#define GRAPH_H
#include <list>
#include <iostream>

using namespace std;

// {T,T,T,F,F,T}

class Graph
{
private:
    int vertices;
    list<int> *adjList;
    bool *visited;

public: 
    Graph(int vertices);
    void addEdge(int src, int dest);
    void DFS(int startVertex);
};

#endif