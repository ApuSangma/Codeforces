#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n,b, c[5]= {0};

    cin >> n;

    for(int i=0; i<n; ++i)
    {
        cin >> b;

        b /= 25;

        c[b]++;

        if(b == 4 && c[2]) --c[2], b = 2;

        if(c[1] < b - 1)
        {
            cout << "NO" <<endl;

            return 0;
        }

        c[1] -= b-1;

    }

    cout << "YES" << endl;

    return 0;
}
