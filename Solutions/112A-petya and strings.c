#include<stdio.h>
#include<string.h>
int main()
{
    char a[200],b[200];
    gets(a);
    gets(b);
    strlwr(a);
    strlwr(b);
    if(strcmp(a,b)<0)
        printf("-1");
    else if(strcmp(a,b)>0)
        printf("1");
    else printf("0");

                                       return 0;
}
