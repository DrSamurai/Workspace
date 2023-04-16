#include <iostream>
#include <vector>
#include "DijakstraAlgorithm.h"
int main()
{

    // std::vector<std::vector<int> > adjacencyMatrix;

    // // Add rows to the adjacency matrix
    // adjacencyMatrix.push_back(std::vector<int>({0, 4, 0, 0, 0, 0, 0, 8, 0}));
    // adjacencyMatrix.push_back(std::vector<int>({4, 0, 8, 0, 0, 0, 0, 11, 0}));
    // adjacencyMatrix.push_back(std::vector<int>({0, 8, 0, 7, 0, 4, 0, 0, 2}));
    // adjacencyMatrix.push_back(std::vector<int>({0, 0, 7, 0, 9, 14, 0, 0, 0}));
    // adjacencyMatrix.push_back(std::vector<int>({0, 0, 0, 9, 0, 10, 0, 0, 0}));
    // adjacencyMatrix.push_back(std::vector<int>({0, 0, 4, 14, 10, 0, 2, 0, 0}));
    // adjacencyMatrix.push_back(std::vector<int>({0, 0, 0, 0, 0, 2, 0, 1, 6}));
    // adjacencyMatrix.push_back(std::vector<int>({8, 11, 0, 0, 0, 0, 1, 0, 7}));
    // adjacencyMatrix.push_back(std::vector<int>({0, 0, 2, 0, 0, 0, 6, 7, 0}));


     int graph[V][V] = {
        {0, 4, 0, 0, 0, 0, 0, 8, 0},
        {4, 0, 8, 0, 0, 0, 0, 11, 0},
        {0, 8, 0, 7, 0, 4, 0, 0, 2},
        {0, 0, 7, 0, 9, 14, 0, 0, 0},
        {0, 0, 0, 9, 0, 10, 0, 0, 0},
        {0, 0, 4, 14, 10, 0, 2, 0, 0},
        {0, 0, 0, 0, 0, 2, 0, 1, 6},
        {8, 11, 0, 0, 0, 0, 1, 0, 7},
        {0, 0, 2, 0, 0, 0, 6, 7, 0}
    };
   



    int startVertex = 0;
    DijkstraAlgorithm *dijkstra = new DijkstraAlgorithm();
    dijkstra->dijkstra(graph, startVertex);
}