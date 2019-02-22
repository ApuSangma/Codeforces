#include <iostream>

using namespace std;

int main()
{
    int n, z_cnt=0, f_cnt=0, i, ara[1005]={0};

    cin >> n;

    for(i=0; i<n; i++)
    {
        cin >> ara[i];

        if(ara[i]==5) f_cnt++;

        if(ara[i]==0) z_cnt++;
    }

    if(z_cnt==0)
    {
        cout << "-1" << endl;

        return 0;
    }
    else if(f_cnt < 9)
    {
        cout << "0" << endl;

        return 0;
    }
    else
    {
        f_cnt = f_cnt/9;

        for(i=0; i<f_cnt*9; i++)
        {
            cout <<"5";
        }

        for(i=0; i<z_cnt; i++)
        {
            cout <<"0";
        }
    }

    cout << endl;


    return 0;
}
