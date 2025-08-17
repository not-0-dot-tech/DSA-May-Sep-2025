#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> performBFS(int V, vector<int> adj[])
{
    bool isVisited[V];
    // initialize all vertices as not visited
    for (int i = 0; i < V; i++)
        isVisited[i] = false;

    vector<int> bfsTraversal; // store the result
    queue<int> q;
    // start BFS from the first vertex (0)
    isVisited[0] = true;
    q.push(0);

    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        bfsTraversal.push_back(node);

        for (auto it : adj[node])
        {
            if (!isVisited[it])
            {
                isVisited[it] = true;
                q.push(it);
            }
        }
    }

    return bfsTraversal;
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

    vector<int> bfsResult = performBFS(n, adj);
    for (int i : bfsResult)
        cout << i << " ";

    return 0;
}
