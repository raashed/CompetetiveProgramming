#include <bits/stdc++.h>
using namespace std;

int main()
{
    int testCases, testCase = 0;
    long long n, m, sum;
    scanf("%d", &testCases);

    while (testCase < testCases)
    {
        scanf("%lld %lld", &n, &m);
        sum = (n / 2) * m;
        printf("Case %d: %lld\n", ++testCase, sum);
    }
    return 0;
}
