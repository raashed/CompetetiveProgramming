#include <bits/stdc++.h>
using namespace std;

#define debug(variable) cout << #variable << " : " << (variable) << endl

int main()
{
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);

    printf("Hello Bangladesh");

    int testCases, testCase = 0;
    long long n, i, ans;
    scanf("%d", &testCases);

    while (testCase < testCases)
    {
        scanf("%lld", &n);
        ans = 0;
        for (i = 1; i <= 1000; i++)
        {
            if (1000 % n == 0)
            {
                ans++;
                printf("%lld ", i);
            }
        }

        printf("\nCase %d: %lld\n", ++testCase, ans);
    }
    return 0;
}
