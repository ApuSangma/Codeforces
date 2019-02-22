#include<cstdio>
#include<iostream>

using namespace std;

int n,f[50];

int main()
{
    f[1]=f[2]=1;

    for(int i=3; i<41; i++)
        f[i]=f[i-2]+f[i-1];

    for(int i=2; i<41; i++)
        f[i]+=f[i-1];

    while(scanf("%d",&n)!=EOF)
        printf("%d\n",f[n]);

    return 0;
}
