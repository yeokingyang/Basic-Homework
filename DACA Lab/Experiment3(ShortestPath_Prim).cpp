#include <iostream>
using namespace std;

#define V 6 

int minKey(int key[], bool mstSet[])
{
    int min = INT_MAX, min_index;

    for (int v = 0; v < V; v++)
        if (mstSet[v] == false && key[v] < min)
            min = key[v], min_index = v;

    return min_index;
}

void printMST(int parent[], int graph[V][V])
{
    int mst = 0;
    cout << "Edge \tWeight\n";
    for (int i = 1; i < V; i++) {
        cout << parent[i] + 1 << " - " << i + 1 << " \t" << graph[i][parent[i]] << "\n";
        mst = mst + graph[i][parent[i]];
    }
    cout << "\nMinimum Cost Spanning Tree for Prim Algorithm : ";
    cout << mst << endl;
}

void primMST(int graph[V][V])
{
    int parent[V];

    int key[V];

    bool mstSet[V];

    for (int i = 0; i < V; i++)
        key[i] = INT_MAX, mstSet[i] = false;

    key[0] = 0;
    parent[0] = -1;

    for (int count = 0; count < V - 1; count++)
    {
        int u = minKey(key, mstSet);

        mstSet[u] = true;

        for (int v = 0; v < V; v++)

            if (graph[u][v] && mstSet[v] == false && graph[u][v] < key[v])
                parent[v] = u, key[v] = graph[u][v];
    }

    printMST(parent, graph);
}


int main()
{

    int graph[V][V] = { { 0, 10, 0, 30, 45, 0},
                       { 10, 0, 50, 0, 40, 25 },
                       { 0, 50, 0, 0, 35, 15 },
                       { 30, 0, 0, 0, 0, 20 },
                       { 45, 40, 35, 0, 0, 55 },
                       { 0, 25, 15, 20, 55, 0 }
    };

    primMST(graph);

    return 0;
}

