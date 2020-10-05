#include <bits/stdc++.h>
using namespace std;
int main()
{
    int testCases, testCase = 0;
    long long n, sqrtN, sqrtN1, row, col, i, j, k;
    scanf("%d", &testCases);

    while (testCase < testCases)
    {
        scanf("%lld", &n);

        sqrtN = ceil(sqrt(n));
        sqrtN1 = sqrtN - 1;
        row = sqrtN, col = sqrtN;
        i = (sqrtN1 * sqrtN1) + 1;
        j = i + sqrtN1;
        k = sqrtN * sqrtN;
        if (sqrtN & 1)
        {
            if (n < j)
                row = abs(i - n) + 1;
            if (n > j)
                col = abs(k - n) + 1;
        }
        else
        {
            if (n < j)
                col = abs(i - n) + 1;
            if (n > j)
                row = abs(k - n) + 1;
        }
        printf("Case %d: %lld %lld\n", ++testCase, col, row);
    }
    return 0;
}
