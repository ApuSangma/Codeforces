#include <iostream>
#include <queue>

using namespace std;

int main()
{
    long long n, m, i, a, b, c=0, cnt=0;

    priority_queue<int> q;

    cin >> n >> m;

    for(i=0; i<n; i++)
    {
        cin >> a >> b;

        c += a;

        q.push(a-b);
    }

    while( m<c && q.size()!=0)
    {
        //cout << q.top() << endl; // numbers are sorted in non - decreasing order in priority_queue

        c -= q.top();

        q.pop();

        cnt++;
    }

   if(m<c) cout << "-1" << endl;

   else
     cout << cnt << endl;

    return 0;
}
