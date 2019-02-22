#include <bits/stdc++.h>

using namespace std;

int main()
{
    char str[10];

    int n, k, len, q, cnt=0;

    cin >>  n >> k;

    for(int i=0; i<n; i++)
    {
        cin >> str;
    }

     len = strlen(str);

    for(int i=0; i<n; i++)
    {

        for(int j=0; j<len; j++)
        {
            q=0;

            for(int p=0; p<=k; p++)
            {
                if(str[i][j]<= (48+p)) q++;
            }

            if(q==k+1) cnt++;
        }
    }

    return 0;
}
