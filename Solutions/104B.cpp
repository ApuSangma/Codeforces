#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    long long a, ara[101], Ans;

    cin >> n;

    cin >> a;

    Ans = a;

    for(int i=1; i<n; i++)
    {
        cin >> ara[i];

        Ans +=  (ara[i] - 1)*(i+1) +1;
    }


    cout << Ans << endl;

   return 0;

}
