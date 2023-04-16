#include "Graph.h"

int main()
{
    Graph *graph = new Graph(4);

    graph->addEdge(0, 1);
    graph->addEdge(0, 2);
    graph->addEdge(0, 3);
    graph->addEdge(1, 2);

    graph->printMatrix();
}