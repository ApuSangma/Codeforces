#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n, k;

    string a="";

    cin >> t;

    while(t--)
    {
        cin >> n >> k;

        a.clear();

        for(int i=0; i<n; i++)
        {
            a += 'a' + i%k;
        }

        cout << a << endl;
    }


    return 0;
}
