#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int n, m, a[101], x, y, i, Ans=0;

    memset(a,0,sizeof(a));

    cin >> n >> m;

    for(i=0; i<n; i++)
    {
        cin >> x >> y;

        a[x]++;

        a[y+1]--;
    }

    for(i=1; i<=m; i++)
    {
        a[i] += a[i-1];

        Ans += !a[i];
    }

    cout << Ans << endl;

    for(i=1; i<=m; i++)
    {
        if(!a[i])
            cout << i << " ";
    }

    cout << "\n";

    return 0;
}
