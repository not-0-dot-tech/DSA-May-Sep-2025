#include <iostream>
#include <vector>
using namespace std;

void dfsHelper(int node, vector<int> adj[], bool isVisited[], vector<int> &result)
{
    isVisited[node] = true; // mark as visited
    result.push_back(node); // add to result

    for (auto it : adj[node])
    {
        if (!isVisited[it])
            dfsHelper(it, adj, isVisited, result);
    }
}

vector<int> performDFS(int V, vector<int> adj[])
{
    bool isVisited[V];
    for (int i = 0; i < V; i++)
        isVisited[i] = false;

    int startNode = 0;
    vector<int> result;

    dfsHelper(startNode, adj, isVisited, result);
    return result;
}

int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> adj[n]; // 0-based indexing

    for (int i = 1; i <= m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<int> dfsResult = performDFS(n, adj);
    for (int i : dfsResult)
        cout << i << " ";

    cout << endl;

    return 0;
}
