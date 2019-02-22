#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int k,i,c=0,d=0,a[15];
    cin>>k;

    for(i=0; i<12; i++)
    {
        cin>>a[i];
    }

    sort(a,a+12);

    for(i=11; i>-1; i--)
    {
        if(c<k) {c+= a[i]; d++;}

        if(c>=k)
        {
            cout<<d<<endl;

            return 0;
        }
    }

    cout<<"-1"<<endl;

    return 0;
}
