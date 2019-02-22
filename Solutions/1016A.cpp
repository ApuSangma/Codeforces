#include <iostream>

using namespace std;

int main()
{
    long long n, m, x, sum=0;

    cin >> n >> m;

    for(int i=0; i<n; i++)
    {
        cin >> x;

        cout << (sum+x)/m -sum/m << " ";

        sum += x;
    }

    return 0;
}
