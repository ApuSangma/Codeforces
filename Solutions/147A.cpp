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

    string s;

    getline(cin,s);

    int sz,i;

    sz = s.size();

    for(i=sz-1; i>=0; i--)
    {
        if((s[i]==',') || (s[i]=='.') || (s[i]=='!') || (s[i]=='?'))
            s.insert(i+1," ");
    }

    sz = s.size();

    for(i=sz-1; i>0; i--)
    {
        if ((s[i]==' ') && ((s[i+1]==' ') || (s[i+1]==',') || (s[i+1]=='.') || (s[i+1]=='!') || (s[i+1]=='?')))
            s.erase(i,1);
    }

    cout << s << endl;

    return 0;
}

