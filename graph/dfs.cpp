#include <bits/stdc++.h>
using namespace std;
vector<int> dfs(int node, int n, vector<int> adj[], vector<int> &vis, vector<int> ans)
{

    vis[node] = 1;
    ans.push_back(node);
    // cout << node << " ";
    for (auto it : adj[node])
    {
        if (!vis[it])
        {
            dfs(it, n, adj, vis, ans);
        }
    }
    return ans;
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> adj[n + 1];
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int start = 2;
    vector<int> vis(n + 1, 0); // 1 base index
    vector<int> ans;
    vector<int> ans = dfs(start, n, adj, vis, ans);
    for (auto it : ans)
    {
        cout << it << " ";
    }
}