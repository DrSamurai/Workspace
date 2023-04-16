#include "Graph.h"

Graph::Graph(int vertices)
{
    this->vertices = vertices;
    this->adjList = new list<int>[vertices];
    this->visited = new bool[vertices];
}

void Graph::addEdge(int src, int dest)
{
    adjList[src].push_front(dest);
}

void Graph::DFS(int startVertex)
{
    visited[startVertex] = true;
    cout << startVertex << " ";

    list<int> adjacents = adjList[startVertex];
    list<int>::iterator iter;

    for (iter = adjacents.begin(); iter != adjacents.end(); ++iter)
    {
        if (!visited[*iter])
        {
            DFS(*iter);
        }
    }
}