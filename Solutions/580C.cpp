#include <bits/stdc++.h>
#define MAX 100005

using namespace std;

bool cat[MAX];

vector <int> adj[MAX];

int parent[MAX], m;

int DFS(int u, int c)
{
    if(c>m) return 0;

    if(adj[u].size()==1 && u!=1) return 1;

    int ans = 0;

    for(int i=0; i<adj[u].size(); i++)
    {
        int v = adj[u][i];

       if(v==parent[u]) continue;

        parent[v] = u;

        if(cat[v]==0) ans += DFS(v, 0);

        else ans += DFS(v,c+1);
    }

    return ans;

}

int main()
{
    int n, a, b;

    cin >> n >> m;

    for(int i=1; i<=n; i++)
    {
        cin >> cat[i];
    }

    for(int i=1; i<= n-1; i++)
    {
        cin >> a >> b;

        adj[a].push_back(b);

        adj[b].push_back(a);
    }

    cout << DFS(1, cat[1]);

    return 0;
}
