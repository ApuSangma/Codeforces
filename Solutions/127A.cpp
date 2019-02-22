#include <bits/stdc++.h>

using namespace std;

double Euclidean_distance(int x1, int y1, int x2, int y2)
{
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) * 1.0);
}

int main()
{
    int n, k, x, y, p, q;

    double seg, poly=0.0;

    scanf("%d %d %d %d",&n,&k,&p,&q);

    for(int i=1; i<n; i++)
    {
        scanf("%d %d",&x,&y);

        seg = Euclidean_distance(p,q,x,y);

        poly += seg;

        p = x;

        q = y;
    }

    poly = (poly*k)/50;

    printf("%.9lf\n",poly);

    return 0;
}
