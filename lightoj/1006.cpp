#include <bits/stdc++.h>
using namespace std;

int main()
{
    // freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);
    long long a, b, c, d, e, f, n;
    long long dp[10010];

    int caseno = 0, cases, i;
    scanf("%d", &cases);
    while (cases--)
    {
        memset(dp, 0, sizeof(dp));
        scanf("%lld %lld %lld %lld %lld %lld %lld", &a, &b, &c, &d, &e, &f, &n);
        dp[0] = a, dp[1] = b, dp[2] = c, dp[3] = d, dp[4] = e, dp[5] = f;
        for (i = 6; i <= n; i++)
            dp[i] = ((dp[i - 1] % 10000007) + (dp[i - 2] % 10000007) + (dp[i - 3] % 10000007) + (dp[i - 4] % 10000007) + (dp[i - 5] % 10000007) + (dp[i - 6] % 10000007) % 10000007);

        printf("Case %d: %lld\n", ++caseno, dp[n] % 10000007);
    }
    return 0;
}
