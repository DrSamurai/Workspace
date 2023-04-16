#include "Graph.h"

Graph::Graph(int vertices)
{
    this->vertices = vertices;
    this->adjList = new list<int>[vertices];
    this->visited = new bool[vertices];
}

void Graph::addEdge(int src, int dest)
{
    adjList[src].push_back(dest);
    adjList[dest].push_back(src);
}

void Graph::BFS(int startVertex)
{

    list<int> queue;

    visited[startVertex] = true;
    queue.push_back(startVertex); 

    // list<int> adjacents = adjList[startVertex];

    list<int>::iterator iter;

    while (!queue.empty()) {
        int currVertex = queue.front();
        cout << "Visited " << currVertex << " ";
        queue.pop_front(); // how does the code after this line work?


        for (iter = adjList[currVertex].begin(); iter != adjList[currVertex].end(); ++iter)
        {
            if (!visited[*iter])
            {
                
                visited[*iter] = true;
                queue.push_back(*iter);
            }
        }
    }
}
