#include <iostream>
#include <cstdio>

using namespace std;

int a[100005]={0};
int k[100005]={0};

int main()
{
    int n,m,l,t=0;

    scanf("%d %d",&n,&m);

    for(int i=0; i<n; ++i)
    {
        scanf("%d",&a[i]);
    }

    for(int i=n-1; i>-1; --i)
    {
        if(!k[a[i]]) t++;

        k[a[i]] = 1;

        a[i] = t;
    }


    for(int i=0; i<m; ++i)
    {
        scanf("%d",&l);

        printf("%d\n",a[l-1]);
    }

    return 0;
}
