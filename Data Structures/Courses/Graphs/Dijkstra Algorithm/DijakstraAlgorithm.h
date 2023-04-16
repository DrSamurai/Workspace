#ifndef DIJKSTRA_H
#define DIJKSTRA_H
#include <vector>
using namespace std;


const int V = 9; // ->  "non-static member reference must be relative to a specific object"

class DijkstraAlgorithm{
public:
    // void dijkstra(vector<vector<int> > &adjacencyMatrix, int startVertex);
    void dijkstra(int graph[V][V], int startVertex);

};

#endif