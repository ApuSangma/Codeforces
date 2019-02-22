#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll a[100005],mn;

set <ll> s;

int main()
{
    int n, k;

    cin >> n >> k;

    for(int i=0; i<n; i++)
    {
        cin >> a[i];

        s.insert(a[i]);
    }

    ll x = 0;

    for(int i=0; i<k; i++)
    {
        if(s.size()==0)
        {
            cout << "0" << endl;
        }
        else
        {
            ll p = *s.begin();

            cout << p - x << endl;

            x = p;

            s.erase(s.begin());
        }
    }

    return 0;
}
