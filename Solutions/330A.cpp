#include <iostream>

using namespace std;

int main()
{
    static int row[10],col[10];

    static char s[11];

    int r, c, i, j, x=0, y=0;

    cin >> r >> c;

    for(i=0; i < r; i++)
    {
        cin >> s;

        for(j=0; j < c; j++)
        {
            if(s[j]=='S')
            {
                if(!row[i])
                {
                    row[i] = 1;

                    x++;
                }
                if(!col[j])
                {
                    col[j] = 1;

                    y++;
                }
            }
        }
    }

    cout << (r*c) - (x*y) << "\n";


    return 0;
}
