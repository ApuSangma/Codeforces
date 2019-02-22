#include <iostream>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

using namespace std;

void print(int c)
{
    if (c <= 26)
        printf("%c", c + 'A' - 1);
    else
    {
        print(c % 26 == 0 ? c / 26 - 1 : c / 26);

        print(c % 26 == 0 ? 26 : c % 26);
    }
}

void convert(char *s)
{
    int r, c;

    if (sscanf(s, "R%dC%d", &r, &c) == 2)
    {
        print(c);

        printf("%d\n", r);
    }
    else
    {
        int i, l = strlen(s);

        c = 0;

        for (i = 0; i < l && isupper(s[i]); i++)
            c = 26 * c + (s[i] - 'A' + 1);

        r = 0;

        for (; i < l; i++)
            r = 10 * r + (s[i] - '0');

        printf("R%dC%d\n", r, c);
    }
}

int main()
{
    char s[17];

    int n;

    scanf("%d\n", &n);

    while (n--)
    {
        scanf("%s", s);

        convert(s);
    }

    return 0;
}
