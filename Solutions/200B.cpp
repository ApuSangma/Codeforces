#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int n;
    int p[101];
    int vol;

    cin>>n;

    for(int i=0; i<n; i++)
    {
        cin>> p[i];
        vol +=p[i];
    }

    printf("%.12f\n",vol/(n*1.0));

    return 0;
}
