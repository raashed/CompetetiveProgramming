

#include<bits/stdc++.h>

using namespace std;

long long int sum(long long int i)
{
    long long int s = 0;
    while (i > 0)
    {
        s = s + (i % 10);
        i = i / 10;
    }
    return s;
}

int main()
{
    long long int testCase, n, nn, c, s;
    scanf("%lld", &testCase);
    for (long long int tc = 1; tc <= testCase; tc++)
    {
        s = 0, c = 0;
        scanf("%lld %lld", &n, &nn);
        if (nn < n)
        {
            long long int x = nn;
            nn = n;
            n = x;
        }
        for (long long int i = n; i <= nn; i++)
        {
            s = s + sum(i);
            if (s % 3 == 0 && i >= n)
            {
                c++;
            }
        }
        printf("Case %d: %lld\n", tc, c);
    }
    return 0;
}