#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int n,a,b,c,i,j,ans=0;

    cin>>n>>a>>b>>c;

    for(i=0; i<=n; i+=a)
        for(j=0; i+j<=n; j+=b)
        {
            if((n-i-j)%c==0)
                ans=max(ans,i/a+j/b+(n-i-j)/c);
        }
        cout<<ans<<"\n";

        return 0;

}
