#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, t, x, y, reach1=0, loss1=0, reach2=0, loss2=0;

    cin >> n;

    for(int i=0; i<n; i++)
    {
        cin >> t >> x >> y;

        if(t==1)
        {
            reach1 += x;

            loss1 += y;
        }

        if(t==2)
        {
            reach2 += x;

            loss2 += y;
        }
    }

    if(reach1>=loss1) cout << "LIVE" << endl;

    else cout << "DEAD" << endl;

    if(reach2>=loss2) cout << "LIVE" << endl;

    else cout << "DEAD" << endl;

    return 0;
}
