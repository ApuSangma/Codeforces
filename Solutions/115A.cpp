#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

vector <int> v[2222];

int d[2222];

int dfs(int g)
{
    if(d[g])
        return d[g];

    int r=0;

    for(int i=0; i<v[g].size(); i++)
    {
        r=max(r,dfs(v[g][i]));
    }

    d[g]=r+1;

    return r+1;
}

main()
{
    int a,n;

    cin >> n;

    for(int i=1; i<=n; i++)
    {
        cin >> a;

        if(a==-1)
            continue;

        v[a].push_back(i);
    }

    int ans=0;

    for(int i=1; i<=n; i++)
    {
        ans=max(ans, dfs(i) );
    }

    cout << ans << "\n";

    return 0;
}
