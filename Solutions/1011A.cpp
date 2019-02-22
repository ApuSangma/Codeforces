#include <iostream>
#include <string.h>

#define mx 60

using namespace std;

int main()
{
    int n, k, i;

    char str[mx];

    int p[mx],res=0, l=-2;

    memset(p,0,sizeof(p));

    cin >> n >> k;

    cin >> str;


    for(i=0; i<n; i++)
    {
        p[str[i]-'a']=1;
    }

    for(i=0; k && i<26; i++)
    {
       if(p[i] && i-l>1)
       {
           k--;
           l=i;

           res += (i+1);
       }
    }

    if(k) res=-1;

    cout << res << endl;

    return 0;
}
