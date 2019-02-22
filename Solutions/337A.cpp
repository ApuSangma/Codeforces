#include<cstdio>
#include<iostream>
#include<algorithm>

using namespace std;

int main()
{

    int n,m;
    int a[1010], mi=1001;
    cin>>n>>m;

    for(int i=0; i<m; i++)
    {
        cin>>a[i];
    }

    sort(a,a+m);

    for(int i=0; i+n-1 <m; i++)
    {
        mi=min(a[i+n-1]-a[i],mi);

    }


    cout<<mi<<endl;


    return 0;
}
