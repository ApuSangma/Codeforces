#include <bits/stdc++.h>
#define ll long long

using namespace std;

int n;

const ll MAX = 1e9;

ll dp[8] = {0, MAX, MAX, MAX, MAX, MAX, MAX, MAX};

ll a, b;

string s;

int main()
{
    cin >> n;

    while(n--)
    {
        cin >> a >> s;

        b = 0;

        for(int i=0; i<s.size(); i++)
        {
            b |= 1 << (s[i] - 'A');
        }

        for(int i=0; i<7; i++)
        {
            dp[i|b] = min(dp[i] + a, dp[i|b]);
        }
    }

    if(dp[7]>=MAX) cout << "-1" << endl;

    else cout << dp[7] << endl;


    return 0;
}
