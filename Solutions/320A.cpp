#include <iostream>

using namespace std;

int main()
{
    long long n;

    cin >> n;

    while(n)
    {

        if(n%10!=1 && n%100!=14 && n%1000!=144)
        {
            cout << "NO\n";

            return 0;
        }

        n /=10;
    }

    cout << "YES\n" ;

    return 0;
}
