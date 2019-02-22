#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, a, sum=0;

    cin >> n;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin >> a;

            if(i==j || i==n-j-1 || i==n/2 || j==n/2)
                sum+=a;
        }

    }

    cout << sum << endl;

    return 0;
}
