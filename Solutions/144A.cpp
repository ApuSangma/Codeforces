#include<iostream>
#include<cstdio>

using namespace std;

int main()
{

    int n,i,ans=0,mx=0,mn=0,a[105];

    cin>>n;

    for(i=0; i<n; i++)
    {
        cin>>a[i];

        if(a[i]<=a[mn]) mn=i;

        if(a[i]>a[mx]) mx=i;
    }

    if(mn<mx) ans = -1;

    ans += (n- mn -1)+ mx;

    cout<<ans<<endl;

    return 0;
}
