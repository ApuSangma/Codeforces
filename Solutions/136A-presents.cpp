#include <iostream>

using namespace std;

int main()
{

    int a[101],t,i=1,n;

    cin>>n;
    for(i=1; i<=n; i++) {
        cin>>t;
        a[t]=i;
    }
    for( i=1; i<=n; i++) {
        cout<<a[i]<<" ";
    }
    cout<<"\n";

    return 0;
}
