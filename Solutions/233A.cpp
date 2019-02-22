#include <iostream>

using namespace std;

int main()
{
    int n;

    cin >> n;

    if(n%2)
    {
        cout << "-1" << endl;

        return 0;
    }

    for(int i=1; i<n; i+=2)
    {
        cout << i+1 << " " << i <<" ";
    }

    return 0;
}
