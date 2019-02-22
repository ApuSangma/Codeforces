#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k, i;

    cin >> n;

    if(n<=2)
    {
        cout << "No\n";

        return 0;
    }
    else
    {
        cout << "Yes\n";

        if(n%2==0) k = n/2;

        else k = (n+1)/2;

        cout << "1 " << k << "\n";

        cout << n-1 << " ";

        for(i=1; i<=n; i++)
        {
            if(i==k) continue;

            else cout << i << " ";
        }

        cout << "\n";
    }


    return 0;
}
