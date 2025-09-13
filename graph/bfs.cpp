#include <bits/stdc++.h>
using namespace std;

vector<int> bfs(int n, int start, vector<int> adj[])
{
    vector<int> vis(n + 1, 0); // 1 base indexing
    queue<int> q;
    vector<int> ans;
    vis[start]=1;
    q.push(start);
    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        ans.push_back(node);
        for (auto it : adj[node])
        {
            if (!vis[it])
            {
                vis[it] = 1;
                q.push(it);
            }
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
    vector<int> ans = bfs(n, start, adj);
    for (auto it : ans)
    {
        cout << it << " ";
    }

    // for(int i=0;i<m;i++){
    //     cout<<"node "<<i<<":--> ";
    //     for(auto a : adj[i]){
    //         cout<<a<<" ";
    //     }
    //     cout<<endl;
    // }
}