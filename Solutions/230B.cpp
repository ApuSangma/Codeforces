/**  Author  : APU SANGMA
     Problem : 230B

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
    ll n, i, j, a,b;

    scanf("%I64d",&n);

    for(i=1; i<=n; i++)
    {
        scanf("%I64d",&a);

        b = sqrtl(a);

        for(j=2; j*j<=b; j++) if(b%j==0) break;

        if(j*j>b && b*b==a && a>1) printf("YES\n");

        else printf("NO\n");
    }

    return 0;

}
