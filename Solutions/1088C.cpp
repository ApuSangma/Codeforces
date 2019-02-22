#include <bits/stdc++.h>

using namespace std;

int a[2001];

int main()
{
    int n;

    cin >> n;

    for(int i=0; i<n; i++) cin >> a[i];

    cout << n+1 << endl;

    int p = 0;

    for(int i=n-1; i>=0; i--)
    {
        int x = (i - (a[i]+p)%n+n) % n;

        cout << "1 " << i+1 << " " << x << endl;

        p += x;
    }

    cout << "2 " << n << " " << n;

    return 0;
}
