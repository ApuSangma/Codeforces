#include <iostream>

using namespace std;

int main()
{
    int n, m,x=0;

    cin>>n>>m;

    for(int i=0; i<=1000; ++i)
    {
        for(int j=0; j<=1000; ++j)
        {
            if(((i*i)+j)==n && (i+(j*j))==m)
            {
                x++;
            }
        }
    }


    cout<<x;


    return 0;
}
