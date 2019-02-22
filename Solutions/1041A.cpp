#include <iostream>

using namespace std;

int main()
{
    long long int n, p=0, i,mxi=0,mni=9999999999;

    long long int a[1001]={0};

    cin >> n;

    for(i=0; i<n; i++)
    {
        cin >> a[i];

        mxi = max(mxi,a[i]);
        mni = min(mni,a[i]);
    }

    p = (mxi- mni)+1 - n;

    cout << p << endl;

    return 0;
}
