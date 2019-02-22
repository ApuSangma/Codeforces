#include <bits/stdc++.h>

using namespace std;

const int MX = 105;

vector <int> node[MX];

bool visited[MX];

//Depth First Search

bool dfs(int curr, int parent, int &cnt)
{
    if(visited[curr])
        return true;

    visited[curr] = 1;

    for(int i=0; i<node[curr].size(); i++)
    {
        int child = node[curr][i];

        if(child != parent)
        {
            cnt++;

            if(dfs(child,curr,cnt))
                return true;

        }
    }

    return false;
}

int main()
{
    int n, m, removed=0;

    cin >> n >> m;

    for(int i=0; i<m; i++)
    {
        int a, b;

        cin >> a >> b;

        node[a].push_back(b);

        node[b].push_back(a);
    }

    for(int i=1; i<=n; i++)
    {
        int cnt = 0;

        bool res = dfs(i, -1, cnt);

       // cout << res << endl;

      // cout << cnt << endl;

        if(res && (cnt & 1)) removed++;

        //cout << removed << endl;
    }

    if((n-removed) & 1) removed++;

    cout << removed << "\n";


    return 0;
}
