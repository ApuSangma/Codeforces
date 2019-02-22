#include <iostream>
#include <algorithm>

using namespace std;

long long int arr[200007];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    long long int n, s, i, j, k;

    cin >> n >> s;

    for(i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr+n);

    long long ans=0;

    if(arr[n/2]==s)     // if mid value is equal to the required value of median
    {
        cout << 0 << endl;

        return 0;
    }

    else if(arr[n/2] < s)
    {
        for(i=n/2; i<n; i++)
        {
            //cout << i << endl;
            if(arr[i] < s)               // if mid value is less than the required value of median
            {
                ans += s-arr[i];
            }
        }
    }

    else if(arr[n/2] > s)
    {
        for(i=n/2; i>=0; i--)
        {
            //cout << i << endl;
            if(arr[i] > s)               // if mid value is greater than the required value of median
            {
                ans += arr[i]-s;
            }
        }
    }

    cout << ans << endl;


    return 0;
}
