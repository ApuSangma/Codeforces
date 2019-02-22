#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, ans = 1, v=1;

    cin >> n;

    while(2*v-1<n)
    {
        v *= 2;

        ans++;
    }

    cout << ans << endl;

    return 0;
}
