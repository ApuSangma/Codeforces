#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    long long int a, b, w, h, x, y, q, res;

    cin >> w >> h >> a >> b;

    q = __gcd(a,b);

    a /= q;
    b /= q;

    res = min(w/a,h/b);

    cout << res << endl;

    return 0;
}
