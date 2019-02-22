#include<iostream>
#include<set>

using namespace std;

int main()
{
    set <int> s;

    int color;

    for(int i=0; i<4; i++)
    {
        cin>>color;

        s.insert(color);

    }

    cout<< 4- s.size() <<endl;

    return 0;
}
