#include <iostream>
#include <cstring>

int dp[100001]= {0};

using namespace std;

int main()
{
    string s;

    int m,l,r;

    cin>>s;

    for(int i=0; i<s.size(); i++)
    {
        dp[i] += dp[i-1];

        if(s[i]==s[i-1]) dp[i]++;
    }

    cin>>m;

    for(int i=0; i<m; i++)
    {
        cin>>l>>r;

        cout<<dp[r-1] - dp[l-1]<<endl;
    }

    return 0;
}
