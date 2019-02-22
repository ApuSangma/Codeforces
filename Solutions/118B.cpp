#include <iostream>

using namespace std;

string s9[]= {"                  0",
              "                0 1 0",
              "              0 1 2 1 0",
              "            0 1 2 3 2 1 0",
              "          0 1 2 3 4 3 2 1 0",
              "        0 1 2 3 4 5 4 3 2 1 0",
              "      0 1 2 3 4 5 6 5 4 3 2 1 0",
              "    0 1 2 3 4 5 6 7 6 5 4 3 2 1 0",
              "  0 1 2 3 4 5 6 7 8 7 6 5 4 3 2 1 0",
              "0 1 2 3 4 5 6 7 8 9 8 7 6 5 4 3 2 1 0"
             };
string s8[]=
{
    "                0",
    "              0 1 0",
    "            0 1 2 1 0",
    "          0 1 2 3 2 1 0",
    "        0 1 2 3 4 3 2 1 0",
    "      0 1 2 3 4 5 4 3 2 1 0",
    "    0 1 2 3 4 5 6 5 4 3 2 1 0",
    "  0 1 2 3 4 5 6 7 6 5 4 3 2 1 0",
    "0 1 2 3 4 5 6 7 8 7 6 5 4 3 2 1 0"
};
string s7[]=
{
    "              0",
    "            0 1 0",
    "          0 1 2 1 0",
    "        0 1 2 3 2 1 0",
    "      0 1 2 3 4 3 2 1 0",
    "    0 1 2 3 4 5 4 3 2 1 0",
    "  0 1 2 3 4 5 6 5 4 3 2 1 0",
    "0 1 2 3 4 5 6 7 6 5 4 3 2 1 0"
};
string s6[]=
{
    "            0",
    "          0 1 0",
    "        0 1 2 1 0",
    "      0 1 2 3 2 1 0",
    "    0 1 2 3 4 3 2 1 0",
    "  0 1 2 3 4 5 4 3 2 1 0",
    "0 1 2 3 4 5 6 5 4 3 2 1 0"
};
string s5[]=
{
    "          0",
    "        0 1 0",
    "      0 1 2 1 0",
    "    0 1 2 3 2 1 0",
    "  0 1 2 3 4 3 2 1 0",
    "0 1 2 3 4 5 4 3 2 1 0"
};
string s4[]=
{
    "        0",
    "      0 1 0",
    "    0 1 2 1 0",
    "  0 1 2 3 2 1 0",
    "0 1 2 3 4 3 2 1 0"
};
string s3[]=
{
    "      0",
    "    0 1 0",
    "  0 1 2 1 0",
    "0 1 2 3 2 1 0"
};
string s2[]=
{
    "    0",
    "  0 1 0",
    "0 1 2 1 0"
};
int main()
{
    int n;

    cin>>n;

    switch (n)
    {
    case 2:
        for(int i=0; i<=n; i++)
        {
            cout<<s2[i]<<endl;
        }
        for(int i=n-1; i>=0; i--)
        {
            cout<<s2[i]<<endl;
        }
        break;
    case 3:
        for(int i=0; i<=n; i++)
        {
            cout<<s3[i]<<endl;
        }
        for(int i=n-1; i>=0; i--)
        {
            cout<<s3[i]<<endl;
        }
        break;
    case 4:
        for(int i=0; i<=n; i++)
        {
            cout<<s4[i]<<endl;
        }
        for(int i=n-1; i>=0; i--)
        {
            cout<<s4[i]<<endl;
        }
        break;
    case 5:
        for(int i=0; i<=n; i++)
        {
            cout<<s5[i]<<endl;
        }
        for(int i=n-1; i>=0; i--)
        {
            cout<<s5[i]<<endl;
        }
        break;
    case 6:
        for(int i=0; i<=n; i++)
        {
            cout<<s6[i]<<endl;
        }
        for(int i=n-1; i>=0; i--)
        {
            cout<<s6[i]<<endl;
        }
        break;
    case 7:
        for(int i=0; i<=n; i++)
        {
            cout<<s7[i]<<endl;
        }
        for(int i=n-1; i>=0; i--)
        {
            cout<<s7[i]<<endl;
        }
        break;
    case 8:
        for(int i=0; i<=n; i++)
        {
            cout<<s8[i]<<endl;
        }
        for(int i=n-1; i>=0; i--)
        {
            cout<<s8[i]<<endl;
        }
        break;
    case 9:
        for(int i=0; i<=n; i++)
        {
            cout<<s9[i]<<endl;
        }
        for(int i=n-1; i>=0; i--)
        {
            cout<<s9[i]<<endl;
        }
        break;
    }

    return 0;
}
