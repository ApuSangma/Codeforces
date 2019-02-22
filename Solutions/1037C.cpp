#include <iostream>

using namespace std;

int main()
{
    string a, b;
    int n, i, cnt=0;

    cin >> n;

    cin >> a >> b;

    for(i=0; i<n; i++)
    {
        if(a[i]!=b[i])
        {
            if(b[i]==a[i+1])
            {
                i++;
            }
             cnt++;
        }
    }

    cout << cnt << endl;


    return 0;
}
