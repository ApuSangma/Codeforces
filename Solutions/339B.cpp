#include<iostream>

using namespace std;

int main()
{

    long long n,m,a,x=1,ans=0;

    cin>>n>>m;

    while(m--)
    {
        cin>>a;

        ans += (a+n-x)%n;

        x=a;
    }

    cout<<ans<<endl;

    return 0;
}
