#include <iostream>

using namespace std;

int main()
{
    int n, a[21],i, ch=0, bi=0, ba=0;

    cin >> n;

    for(i=1; i<=n; i++)
    {
        cin >> a[i];

        if(i%3==1)
        {
            ch += a[i];
        }
        if(i%3==2)
        {
            bi += a[i];
        }

        if(i%3==0)
        {
            ba += a[i];
        }
    }

    if(ch>bi && ch>ba)
    {
        cout << "chest" << endl;
    }
    else if(bi > ch && bi > ba)
    {
        cout << "biceps" << endl;
    }
    else if(ba > ch && ba > bi)
    {
        cout << "back" << endl;
    }

    return 0;
}
