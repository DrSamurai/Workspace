#ifndef GRAPH_H
#define GRAPH_H
#include <iostream>


class Graph{

private: 
    int vertices;
    bool** adjacencyMatrix;

public: 
    Graph(int vertices);
    void addEdge(int source, int destination);
    void removeEdge(int source, int destination);    
    void printMatrix();
};




#endif