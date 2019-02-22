#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define rep(i,x,y) for (int i=x; i<=y; i++)

ll n,mx,t,Ans;
ll aaa[300010],ccc[15000010],ppp[1500001];
bool bbb[15000010];
int main()
{
    scanf("%I64d",&n);
    Ans=n;
    rep(i,1,n)
    {
        scanf("%I64d",&aaa[i]);
        ccc[aaa[i]]++;
        mx=max(mx,aaa[i]);
    }
    rep(i,2,mx)
    {
        if (!bbb[i])
            ppp[++t]=i;
        for (int j=1; j<=t && ppp[j]*i<=mx; j++)
        {
            bbb[ppp[j]*i]=1;
            if (i%ppp[j]==0)
                break;
        }
    }
    rep(i,1,t)
    {
        ll r=0;
        for (int j=ppp[i]; j<=mx; j+=ppp[i])
            r+=ccc[j];
        if (r<n)
            Ans=min(Ans,n-r);
    }
    if (Ans==n)
        printf("-1");
    else
        printf("%I64d\n",Ans);
    return 0;
}
