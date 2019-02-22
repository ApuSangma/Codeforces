#include <iostream>
#include <set>

#define LL long long

using namespace std;

int main()
{
    LL n,len,i;

    string s;

    cin >> n;

    cin >> s;

    if(n==1)
    {
        cout << "YES" << endl;

        return 0;
    }

    set < char > rec;

    for(i=0; i<n; i++)
    {
        rec.insert(s[i]);
    }

    len = rec.size();

    if(len<n)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;

    }
    return 0;
}
