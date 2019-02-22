#include <iostream>

using namespace std;

int main()
{

    long long int n, i, j, k;

    cin >> n;

    if(n%3==0 || n%3==1)
        cout <<  n-2 << " " << "1" << " " << "1" << endl;

    else if(n%3==2)
    {
       cout << n - 3 << " " << "2" << " " << "1" << endl;
    }
    return 0;
}
