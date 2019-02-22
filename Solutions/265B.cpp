#include <iostream>

using namespace std;

int main()
{
    long long int n, i, h, ans=0, p=0;

    cin >> n;

    for(i=0; i<n; i++)
    {
        cin >> h;

        ans += abs(p-h);

        ans += 2;

        p = h;
    }

    cout << ans - 1 << endl;



    return 0;
}
