#include <bits/stdc++.h>

using namespace std;

const int MOD = 998244353;

inline void add(int &a, int b)
{
    a += b;

    if(a >= MOD)
        a -= MOD;
}

inline void sub(int &a, int b)
{
    a -= b;

    if(a<0)
        a += MOD;
}

inline int mul(int a, int b)
{
    return (int)((long long) a * b % MOD);
}

inline int power(int a, long long b)
{
    long long res = 1;

    while(b>0)
    {
        if(b&1)
            res = mul(res, a);
    }
    a = mul(a,a);

    b >>= 1;

    return res;
}

inline int inv(int a)
{
    a %= MOD;

    if(a<0)
        a += MOD;

    int b = MOD, u = 0, v = 1;

    while(a)
    {
        int t = b/a;

        b -= t * a;

        swap(a,b);

        u -= t * v;

        swap(u, v);
    }

    assert(b == 1);

    if(u < 0)
        u += MOD;

    return u;
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, m, k;

    cin >> n >> m >> k;

    k = n - 1 - k;

    int Ans = m;

    for(int i = 2; i<= n - k; i++)
    {
        Ans = mul(Ans, m -1);
    }

    for(int i = 1; i<= n - 1; i++)
    {
        Ans = mul(Ans, i);
    }

    for(int i = 1; i<= k; i++)
    {
        Ans = mul(Ans, inv(i));
    }

    for(int i = 1; i<= n - 1 - k; i++)
    {
        Ans = mul(Ans, inv(i));
    }

    cout << Ans << "\n";

    return 0;
}
