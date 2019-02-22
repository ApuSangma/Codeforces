#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int n, m, q, c[1010];

    string s, t;

    memset(c,0,sizeof(c));

    cin >> n >> m >> q;

    cin >> s >> t;

    for(int i=0; i<=n-m; i++)
    {
        c[i+1] = c[i] + (s.substr(i,m)==t);
    }

    while(q--)
    {
        int l, r;

        cin >> l >> r;

        if(r-l >= m-1)
        {
            cout << c[r-m+1] -c[l-1] << endl;
        }

        else cout << 0 << endl;
    }


    return 0;
}
