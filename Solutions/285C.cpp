#include <iostream>
#include <algorithm>

#define LL long long int

using namespace std;

LL ara[300005]= {0};

int main()
{
    LL n, i, j, ans=0;

    cin >> n;

    for(i=0; i<n; i++)
    {
        cin >> ara[i];
    }

    sort(ara,ara+n);


    for(j=1; j<=n; j++)
    {
        if(ara[j-1]>=j)
        {
            ans += (LL) (ara[j-1]-j);
        }
        else
        {
            ans += (LL) (j-ara[j-1]);
        }
    }

    cout << ans << endl;

    return 0;
}

