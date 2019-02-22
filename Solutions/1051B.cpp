/** Author : Izanagi **/

#pragma warning(disable:4996)
#pragma comment(linker, "/stack:200000000")
#pragma GCC optimize ("Ofast")
#pragma GCC target ("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#pragma GCC optimize ("-ffloat-store")

#include <bits/stdc++.h>
//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>

//using namespace __gnu_pbds;

using namespace std;

/** using ordered_set = tree<T,
null_type, less<T>, rb_tree_tag,
tree_order_statistics_node_update>;

ordered_set<int> X;
X.insert(1);
X.insert(2);
X.insert(4);
X.insert(8);
X.insert(16);
cout << *X.find_by_order(5) << '\n';
cout << X.order_of_key(4) <<  '\n';  **/

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
const short DEBUG{0};
#define debug(x) if (DEBUG) cout << #x << " = " << x << '\n'
#define fast ios_base:: sync_with_stdio(false),cin.tie(0),cout.tie(0)

int main ()
{
    fast;
    // freopen("txt.in", "r", stdin);
    // freopen("txt.out", "w", stdout);

    ll l, r, i;

    cin >> l >> r;

    cout << "YES" << "\n";

    for(i=l; i<=r; i+=2)
    {
        cout << i << " " << i+1 << "\n";
    }

    return 0;
}

