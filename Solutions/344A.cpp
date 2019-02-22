#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int n,x,prev=0,counter=0;

    cin>>n;

    while(n--)
    {
        cin>>x;

        if(x!=prev)
            counter++;
        prev = x;
    }
    cout<<counter<<endl;

    return 0;
}
