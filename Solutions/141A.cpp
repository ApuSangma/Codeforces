#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    string x,y,z;

    cin>>x>>y>>z;

    x = x + y;

    sort(x.begin(),x.end());
    sort(z.begin(),z.end());

    if(x==z)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
