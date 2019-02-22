#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;

    map<char,string> mp;

    cin >> s;

    for(int i=s.size()-1; i>=0; i--)
    {
        mp[s[i]] += s[i];
    }

    auto it = mp.rbegin();

   //for(auto it: mp)  cout << it.first << ' ' << it.second << endl;


   cout << it->second << endl;


    return 0;
}
