#include <bits/stdc++.h>

using namespace std;

int a[26];

int main()
{
    int n, k;

    string s;

    cin >> n >> k;

    cin >> s;

    for(auto &it:s) a[it-'A']++;

    int Ans = a[0];

    for(int i=0; i<k; i++) Ans = min(Ans, a[i]);

    cout << Ans*k << endl;

    return 0;
}
