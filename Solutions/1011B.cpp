#include <iostream>
#define mx 110

using namespace std;

int a[mx];

int main()
{
    int n, m, i, j, t, x;

    cin >> n >> m;

    for(i=0; i<m; i++)
    {
        cin >> x;

        a[x]++;
    }

    for(i=1; ;i++)
    {
        for(j=1,t=0; j<mx; j++)
        {
            t+=a[j]/i;
        }

        if(t<n) break;

    }

    cout << i - 1 << endl;

    return 0;
}
