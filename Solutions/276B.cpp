#include <bits/stdc++.h>

using namespace std;

int cnt[26];

int main()
{
    string s;

    int x=0;

    cin >> s;

    for(int i=0; i<s.size(); i++)
    {
        cnt[s[i] - 'a']++;
    }

    for(int i=0; i<26; i++)
    {
       if(cnt[i]&1) x++;
    }

    if(x==0 || (x&1)) cout << "First\n";

    else cout << "Second\n";


    return 0;
}
