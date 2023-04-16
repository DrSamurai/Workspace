#include "DijakstraAlgorithm.h"
#include <vector>
#include <queue>
#include <iostream>
using namespace std;

const int INF = 1e9;

void DijkstraAlgorithm::dijkstra(int graph[V][V], int startVertex)
{
    // int numVertices = adjacencyMatrix.size();

    int numVertices = V;


    priority_queue<pair<int, int>, vector<pair<int, int> >, greater<pair<int, int> > > pq; //1. elements , 2. container, 3. comparison func -> compares first elements of each pair? how? 
    vector<int> dist(numVertices, INF);
    vector<bool> visited(numVertices, false);

    dist[startVertex] = 0;
    pq.push(make_pair(dist[startVertex], startVertex));

    while (!pq.empty())
    {
        int currVertex = pq.top().second;
        pq.pop();

        if (visited[currVertex])
        {
            continue;
        }

        visited[currVertex] = true;

        for (int neighbor = 0; neighbor < numVertices; neighbor++)
        {
            int edgeWeight = graph[currVertex][neighbor];

            if (edgeWeight > 0)
            {
                int tentantiveDistance = dist[currVertex] + edgeWeight; //INF + edgeWeight?

                if (tentantiveDistance < dist[neighbor])
                {
                    dist[neighbor] = tentantiveDistance;
                    pq.push(make_pair(dist[neighbor], neighbor));
                }
            }
        }
    }

    for (int i = 0; i < numVertices; i++)
    {
        if (dist[i] == INF)
        {
            cout << "INF" << endl;
        }
        else
        {
            cout << dist[i] << endl;
        }
    }
}