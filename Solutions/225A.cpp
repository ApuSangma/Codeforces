#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n, x, a, b;

    bool ok = true;

    cin >> n;

    cin >> x;

    while(n--)
    {
        cin >> a >> b;

        if(a==x || a==7-x || b==x || b==7-x) ok = false;
    }

    if(ok) cout << "YES" << endl;

    else cout << "NO" << endl;

    return 0;
}
