/**  Author  : APU SANGMA
     Problem : 268B

**/

#include<bits/stdc++.h>
#include<cstdio>
#include<iostream>
#include<cstring>
#include<cmath>
#include<cstdlib>
#include<cctype>
#include<algorithm>
#include<string>
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
typedef long long ll;
const int INF=0x7FFFFFFF;

#define __ cin.sync_with_stdio(false);\
           cin.tie();
#define PI 3.141592653589793
#define MOD 1000000007LL
#define MAX(a,b) ((a)>(b)?(a):(b))
#define MIN(a,b) ((a)<(b)?(a):(b))
#define FOR(i,n) for(int i=0;i<(n);i++)
#define REP(i,a,b) for(int i=(a);i<(b);i++)


int main()
{
    ll n;

    cin>>n;

    cout<<n*(n*n+5)/6<<endl;

    return 0;
}
