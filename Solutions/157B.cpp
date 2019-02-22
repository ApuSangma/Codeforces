/** Author : Izanagi **/

#pragma warning(disable:4996)
#pragma comment(linker, "/stack:200000000")
#pragma GCC optimize ("Ofast")
#pragma GCC target ("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#pragma GCC optimize ("-ffloat-store")

#include <bits/stdc++.h>

using namespace std;

const long long Mod = 1e9 + 7;
const long long Inf = 1e18;
const long long Lim = 1e5 + 1e3;
const double eps = 1e-10;

typedef long long ll;
typedef vector <int> vi;
typedef vector <vi> vvi;
typedef vector <ll> vl;
typedef pair <int, int> pii;
typedef pair <ll, ll> pll;

#define F first
#define S second
#define mp make_pair
#define pb push_back
#define pi 2*acos(0.0)
#define rep2(i,b,a) for(ll i = (ll)b, _a = (ll)a; i >= _a; i--)
#define rep1(i,a,b) for(ll i = (ll) a, _b = (ll)b; i <= _b; i++)
#define rep(i,n) for(ll i = 0, _n = (ll)n ; i < _n ; i++)
#define mem(a,val) memset(a,val, sizeof(a))
#define all(v) v.begin(), v.end()
#define fast ios_base:: sync_with_stdio(false),cin.tie(0),cout.tie(0)

long long ans, r[105];

int main ()
{
     fast;
    // freopen("txt.in", "r", stdin);
    // freopen("txt.out", "w", stdout);

    int n;

    cin >> n;

    for(int i=1; i<=n; i++) cin >> r[i];

    sort(r+1, r+n+1);

    for(int i=1; i<=n; i++)
    {

        if(i%2==n%2) ans+= r[i]*r[i] - r[i-1] * r[i-1];
    }

    cout << fixed << setprecision(10) << ans*pi << "\n";

    return 0;
}
