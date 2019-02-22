#include <iostream>

using namespace std;

int main()
{
    int n, a[101]= {0},b[101]= {0},x=0,p=0,q=0;

    cin>>n;

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    for(int i=0; i<n; i++)
    {
        if(a[i]==0)
        {
            x++;
        }

        else if(a[i] < 0 && p==0)
        {
            cout<<"1 "<<a[i]<<endl;

            a[i] = 0;

            p = 1;
        }

        else if(a[i] < 0 && p!=0)
        {

            b[q] = a[i];

            q++;
        }
    }

    if( q > 1 )
    {
        p = 10;

        cout<<n-x-q+1;

        for(int i=0; i<2; i++)
        {
            cout<<" "<<b[i];
        }

        for(int i=0; i<n; i++)
        {
            if(a[i] > 0)
            {
                cout<<" "<<a[i]<<" ";
            }
        }
    }

    else
    {
        cout<<n-x-q-1;

        for(int i=0; i<n; i++)
        {
            if(a[i] > 0)
            {
                cout<<" "<<a[i];
            }
        }

    }

    cout<<endl;

    if(p==10)
    {
        cout<<x+q-2;

        for(int i=0; i<x; i++)
        {
            cout<<" 0";
        }

        for(int i=2; i< q; i++)
        {
            cout<<" "<<b[i];
        }
    }

    else
    {
        cout<<x+q;

        for(int i=0; i<x; i++)
        {
            cout<<" 0";
        }

        for(int i=0; i<q; i++)
        {
            cout<<" "<<b[i];
        }
    }

    return 0;
}
