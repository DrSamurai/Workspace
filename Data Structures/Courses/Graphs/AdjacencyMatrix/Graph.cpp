#include "Graph.h"
using namespace std;
Graph::Graph(int vertices)
{
    this->vertices = vertices;

    adjacencyMatrix = new bool *[vertices];

    for (int i = 0; i < vertices; i++)
    {
        adjacencyMatrix[i] = new bool[vertices]; // ?
        for (int j = 0; j < vertices; j++)
        {
            adjacencyMatrix[i][j] = false;
        }
    }
}

void Graph::addEdge(int source, int destination)
{
    adjacencyMatrix[source][destination] = true;
    adjacencyMatrix[destination][source] = true;
}

void Graph::removeEdge(int source, int destination)
{
    adjacencyMatrix[source][destination] = false;
    adjacencyMatrix[destination][source] = false;
}

void Graph::printMatrix()
{
    /*
              1 2 3 4
              - - - -
            1|1 0 1 0
            2|0 1 1 0
            3|
            4|
    */

    // Print the column headers
    cout << "  ";
    for (int i = 0; i < vertices; i++)
    {
        cout << i + 1 << " ";
    }
    cout << "\n  - - - -" << endl;

    // Print the row headers and matrix contents
    for (int i = 0; i < vertices; i++)
    {
        cout << i + 1 << "|";
        for (int j = 0; j < vertices; j++)
        {
            cout << adjacencyMatrix[i][j] << " ";
        }
        cout << endl;
    }
}