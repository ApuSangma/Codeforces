#include <bits/stdc++.h>

using namespace std;

const int MOD = 1e9 + 7;

int main()
{
    string s;

    long long int Ans = 1, cnt=0;

    cin >> s;

    s += 'b';

    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='a') cnt++;

        else if(s[i]=='b') Ans = (Ans*(cnt+1)) % MOD, cnt = 0;
    }


    cout << (Ans + MOD - 1) % MOD << endl;


    return 0;
}
