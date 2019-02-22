#include <iostream>

using namespace std;

char arr[200][200];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, m,i,j;

    cin >> n >> m;

    for(i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    int r1 = -1, r2 = -1, c1, c2, len;

    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            if(arr[i][j]=='B')
            {
                r1 = i;        // index of 1st black cell found by forward checking in loop

                c1 = j;

                break;
            }
        }
        if(r1!=-1) break;
    }

    for(i=n-1; i>=0; i--)
    {
        for(j=m-1; j>=0; j--)
        {
            if(arr[i][j]=='B')
            {
                r2 = i;  // index of 1st black cell found by reverse checking in loop

                //c2 = j;

                break;
            }
        }
        if(r2!=-1) break;
    }

    //cout << r1 << " " <<  r2 << endl;

    len = r2 - r1;  // reverse check index - forward check index

    cout << r1 + len/2 + 1 << " " << c1 + len/2 + 1 << endl;


    return 0;
}
