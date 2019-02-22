#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;

    cin >> n >> m;

    if(m>n) swap(n,m);

    int vasya = min(n,m);

    int petya = n + m - 1 - vasya;

    cout << petya << " " << vasya;

    return 0;
}
