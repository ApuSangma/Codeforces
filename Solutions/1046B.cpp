#include <iostream>

using namespace std;

int main()
{
    long long int n, a, b, ans;

    cin >> n;

    ans=0;
    while(n--)
    {
        cin >> a >> b;

        ans = max(ans,(a+b));
    }

    cout << ans << endl;

    return 0;
}
