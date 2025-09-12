#include <bits/stdc++.h>
using namespace std;
int main()
{

    // matrix representation----------->

    // int n, m;
    // cin >> n >> m;
    // int graph[n + 1][n + 1];
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         graph[i][j]=0;
    //     }
    // }
    // for (int i = 0; i < m; i++)
    // {
    //    int a,b;
    //    cin>>a>>b;
    //    graph[a][b]=1;
    //    graph[b][a]=1;
    // }

    //  for (int i = 1; i <=n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //        cout<<graph[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    // adj list representation ----------->

    // int n, m;
    // cin >> n >> m;
    // vector<int> adj[n + 1];
    // for (int i = 0; i < m; i++)
    // {
    //     int u, v;
    //     cin >> u >> v;
    //     adj[v].push_back(u);
    //     adj[u].push_back(v);
    // }

    // for (int i = 1; i <=n; i++)
    // {
    //     cout<<"Node "<<i<<"-->";

    //     for (int v : adj[i])
    //     {
    //         cout << v << " ";
    //     }
    //     cout << endl;
    // }

    // weight graph matrix form representation ----->

    // for (int i = 0; i <m; i++)
    // {
    //    int a,b,wt;
    //    cin>>a>>b>>wt;
    //    graph[a][b]=wt;
    //    graph[b][a]=wt;
    // }

    // weight graph representation using list-------->
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> adj[n + 1];
    for (int i = 0; i < m; i++)
    {
        int u, v, wt;
        cin >> u >> v >> wt;
        adj[u].push_back({wt, v});
        adj[v].push_back({wt, u});
    }

    for (int i = 1; i <= n; i++)
    {
        cout << "Node " << i << " --> ";
        for (auto &p : adj[i])
        {
            int wt = p.first;
            int v = p.second;
            cout << "(" << v << "," << wt << ") ";
        }
        cout << endl;
    }
}

// 5 6
// 1 2
// 1 3
// 2 4
// 3 4
// 3 5
// 4 5