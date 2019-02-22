#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll D(ll a)
{
    for(int i=2; (ll) i*i <= a; i++) if(a % i == 0) return i;

    return 0;
}

int main()
{

    ll n;

    cin >> n;

    ll p = D(n);

    if(n==1 || p==0)
    {
        cout << "1\n0\n";

        return 0;
    }

    ll q = D(n / p);

    if(q==0)
    {
        cout << "2\n";

        return 0;
    }

    cout << "1\n" << p * q << endl;


    return 0;
}
