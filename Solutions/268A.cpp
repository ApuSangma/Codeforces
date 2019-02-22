#include<iostream>

using namespace std;

int a[105],b[105];

int main()
{
    int n,x,i,j,ans=0;

    cin>>n;

    for(i=0; i<n; i++)
    {
        cin>>x;

        b[x]++;

        ans += a[x];

        cin>>x;

        a[x]++;

        ans += b[x];

    }


    //Brute Force Attack - - > The Bengali Method

    /* for(i=0; i<n; i++)
     {
         for(j=0; j<n; j++)
         {
             if(b[i]==a[j])

                 counter++;

         }
     }*/

    cout<<ans<<endl;

    return 0;
}
