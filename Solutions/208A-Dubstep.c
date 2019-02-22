#include<stdio.h>
#include<string.h>
int main()
{
    char s[201];
    int i;

    scanf("%s",s);

    for(i=0; i<strlen(s); i++)
        if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B')
        {
            i+=2;
            putchar(' ');
        }
        else putchar(s[i]);

    return 0;
}
