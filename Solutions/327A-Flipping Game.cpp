#include <iostream>

using namespace std;

int main ()
{

    int i,n,a,x,y,maxx;
    cin>>n;

    for(maxx=x=y=i=0; i<n; i++) {
        cin>>a;
        if(a) y++;
        if(!a) x++, maxx=x>maxx? x:maxx;
        else if (x>0)
            x--;
    }
    if(!maxx)
        maxx--;
    cout<<y+maxx<<"\n";

    return 0;
}
