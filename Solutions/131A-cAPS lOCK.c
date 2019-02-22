#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int i, s=0;
    char A[100];
    gets(A);


    for(i=1; A[i]!='\0'; i++)
    {
        if(islower(A[i]))
        {
            s=1;
            break;
        }

    }
    if(s==1)
        puts(A);
    else
    {
        if(islower(A[0]))
            putchar(toupper(A[0]));
        else
            putchar(tolower(A[0]));
        for(i=1; A[i]!='\0'; i++)
            putchar(tolower(A[i]));

    }
    return 0;
}
