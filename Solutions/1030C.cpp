#include <iostream>

using namespace std;

int main()
{

    int n,i,j, sum=0, x=0;

    string s;

    cin >> n;

    cin >> s;


    for(i=0; i<=1000; i++)
    {
        sum=0;

        x =0;

        for(j=0; j<n; j++)
        {
            sum = sum + s[j] - '0';


            if(j==n-1)
            {
                if((sum!=i) && sum )
                {
                    x = 0;

                    break;
                }
            }

            if(sum==i)
            {
                x++;

                sum=0;
            }

            if(sum==i)
            {
                x++;

                sum=0;

            }

            else if(sum>i)
            {
                x=0;

                break;
            }
        }
        if(x>=2)
        {
            break;
        }
    }

    if(x>=2)
        cout << "YES" << endl;

    else
        cout << "NO" << endl;

    return 0;
}
