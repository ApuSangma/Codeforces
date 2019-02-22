#include<iostream>

using namespace std;

int main ()
{
    int a, b, n, m[24][60]={0},t=0;

    cin >> n;

    for(int i=0; i<n; i++)
    {
        cin >> a >> b;

        m[a][b]++;

        if(m[a][b]>t)  t=m[a][b];
    }

    cout << t <<endl;

    return 0;
}
