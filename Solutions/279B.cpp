#include <iostream>

using namespace std;

int main()
{
    long long n, t, a[100005], i, sum, left,right,book;

    sum=left=right=book=0;

    cin >> n >> t;

    for(i=0; i<n; i++)
    {
        cin >> a[i];
    }

    while(right<n)
    {
        if(sum<=t)
        {
            sum += a[right++];

            if(sum<=t) book = max(book,right - left);
        }
        else sum -= a[left++];
    }

    cout << book << endl;

    return 0;
}
