#include <iostream>
using namespace std;
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

    return 0;
}