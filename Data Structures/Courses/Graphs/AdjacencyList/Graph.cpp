#include "Graph.h"
using namespace std;

Graph::Graph(int vertices)
{
    this->vertices = vertices;
    adjList = new std::vector<int>[vertices];

    for (int i = 0; i < vertices; i++)
    {
        adjList[i] = *new std::vector<int>();
    }
}

void Graph::addEdge(int src, int dest)
{
    adjList[src].push_back(dest);
    adjList[dest].push_back(src);
}

void Graph::removeEdge(int src, int dest)
{
    for (auto it = adjList[src].begin(); it != adjList[src].end(); ++it)
    { // begin returns pointetr therefore *it
        if (*it == dest)
        {
            adjList[src].erase(it);
        }
    }

    for (auto it = adjList[dest].begin(); it != adjList[dest].end(); ++it)
    {
        if (*it == src)
        {
            adjList[dest].erase(it);
        }
    }
}

void Graph::printGraph()
{
    for (int i = 0; i < vertices; i++)
    {
        cout << "[" << i << "]" << " => ";
        for(auto data : adjList[i]){
            cout << data << " -> ";
        }
        cout << "null" << endl;
    }
}