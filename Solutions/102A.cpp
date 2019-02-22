#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
    int n, ans=0;

    scanf("%d",&n);

    for(int i=1; i<=n; i++)
    {
        if(__gcd(i,n)==1) ans++;
    }

    printf("%d\n",ans);

    return 0;
}
