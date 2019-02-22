/** Author : Izanagi **/

#pragma warning(disable:4996)
#pragma comment(linker, "/stack:200000000")
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,sse4,popcnt,abm,mmx,avx,tune=native")
#pragma GCC optimize ("-ffloat-store")

#include <bits/stdc++.h>

using namespace std;

const long long Mod = 1e9 + 7;
const long long Inf = 1e18;
const long long Lim = 1e5 + 1e3;
const double eps = 1e-10;

typedef long long ll;
typedef vector <int> vi;
typedef vector <vi> vii;
typedef vector <ll> vl;
typedef pair <int,int> pii;
typedef pair <ll,ll> pll;

#define F first
#define S second
#define mp make_pair
#define pb push_back
#define pi 2*acos(0.0)
#define mem(a,val) memset(a,val,sizeof(a))
#define all(v) v.begin(), v.end()
#define fast ios_base:: sync_with_stdio(false),cin.tie(0),cout.tie(0)

int main()
{
    fast; // for fast input - output

    ll n, a, cnt=0,i,prev=0,mx=0;

    cin >> n;

    for(i=0; i<n; i++)
    {
        cin >> a;

        if(a <= 2*prev)
        {
            cnt++;

            mx = max(mx,cnt);

            prev = a;
        }
        else
        {
            cnt = 0;

            prev = a;

            mx = max(mx, cnt);
        }
    }


    cout << mx + 1 << "\n";


    return 0;
}


