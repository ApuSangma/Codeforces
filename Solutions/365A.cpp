#include <bits/stdc++.h>

using namespace std;

int n, k, cnt, x, arr[101][10], a[101], i,j;

bool Good_number(int p, int q, int r)
{
    while( p > 0)
    {
        j = p%10 ;
        p = p/10 ;
        arr[r][j]++ ;
    }

    for(x = 0; x <= q; x++)
    {

        if (arr[r][x]==0)
        {

            return false;
        }
    }

    return true;
}



int main()
{
    cin >> n >> k;

    for(i=0; i < n; i++)
    {
        cin >> a[i];
    }

    for(i=0; i < n; i++)
    {
        if(Good_number(a[i],k,i)==true) cnt++;
    }


    cout << cnt << endl;

    return 0;
}
