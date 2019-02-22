#include <iostream>

using namespace std;

int main()
{
    int a, b, i, ans1=0, ans2=0;

    cin >> a >> b;

    for(i=1; i<=6; i++)
    {
        if(abs(i-a) < abs(i-b)) ans1++; // a is closer to number x than number b

        else if(abs(i-a) > abs(i-b)) ans2++; // b is closer to number x than number a
    }

    cout << ans1 << " " << 6 - ans1 - ans2 << " " << ans2 << endl;

    return 0;
}
