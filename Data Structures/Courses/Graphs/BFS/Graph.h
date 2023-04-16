#ifndef GRAPH_H
#define GRAPH_H
#include <list>
#include <iostream>

using namespace std;


class Graph{
private:
    int vertices;
    list<int> *adjList;
    bool* visited;

public:
    Graph(int vertices);
    void addEdge(int src, int dest);
    void BFS(int startVertex);
    



};



#endif