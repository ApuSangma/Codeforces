#include<bits/stdc++.h>

using namespace std;

long long a[2],z,n;

int main()
{
    cin>>a[0]>>a[1]>>n;

    while(n-=__gcd(a[z],n))
    {
        z^=1;
    }
    cout<<z<<endl;


    return 0;
}
