#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int n,i, j, k, m[10001]={0}, a=0;

    string s, t;

    cin >> n >> s >> t;

    for(i=0; i<n; i++)
    {
        if(s[i]!= t[i])
            a = s.find(t[i],i);

        else continue;

        if(a!=-1)
            for(j=a; j>i; j--)
            {
               m[k++] = j-1;

               swap(s[j], s[j-1]);
            }
        else
        {
            cout << "-1";

            return 0;
        }
    }

    cout << k << endl;

    for(i=0; i<k; i++)
    {
        cout << m[i]+1 << " ";
    }


    return 0;
}
