#include <bits/stdc++.h>

using namespace std;

int main()
{
    char s[55], t[55];

    int i, pos=0, len;

    scanf("%s %s",&s,&t);

    len = strlen(t);

    for(i=0; i<len; i++)
    {
        if(t[i]==s[pos]) pos++;
    }

    printf("%d\n",pos+1);

    return 0;
}
