#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstdlib>
#include<cctype>
#include<algorithm>
#include<string.h>
#include<vector>
#include<queue>
#include<map>
#include<set>
#include<sstream>
#include<stack>
#include<list>
#include<assert.h>
#include <bitset>
#include <time.h>

using namespace std;

typedef long long int ll;
const int INF=0x7FFFFFFF;

#define PI 3.141592653589793
#define MOD 1000000007LL
#define MAX(a,b) ((a)>(b)?(a):(b))
#define MIN(a,b) ((a)<(b)?(a):(b))
#define FOR(i,n) for(int i=0;i<(n);i++)
#define REP(i,a,b) for(int i=(a);i<(b);i++)


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int  n, k, l, c, d, p, nl, np, t_drinks, t_salt, t_lime, toast;

    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    t_drinks = k * l / nl;

    t_lime = c*d;

    t_salt = p/np;

    toast = min(t_drinks,min(t_lime,t_salt))/n;

    cout << toast << endl;

    return 0;
}

