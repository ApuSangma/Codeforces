#include <iostream>
#include <algorithm>

using namespace std;


int main()
{
    int n, m, a[101], i, r=0;

    cin >> n >> m;

    for(i=0; i<n; ++i)
    {
        cin >> a[i];
    }

    sort(a,a+n);

    for(i=0; i<m; ++i)
    {
        r -= min(a[i],0);
    }

    cout << r << endl;

    return 0;
}
