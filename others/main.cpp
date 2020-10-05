#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)n; i++)
#define pb(x) push_back(x)
#define mem(x, y) memset(x, y, sizeof(x))
#define read() freopen("in.txt", "r", stdin)
#define write() freopen("out.txt", "w", stdout)
using namespace std;
#define debug(variable) cout << #variable << " : " << (variable) << endl
int storeValue[10010];
int a, b, c, d, e, f;
int fn(int n)
{
    if (storeValue[n] == 0)
    {
        if (n == 0)
            storeValue[n] = a;
        else if (n == 1)
            storeValue[n] = b;
        else if (n == 2)
            storeValue[n] = c;
        else if (n == 3)
            storeValue[n] = d;
        else if (n == 4)
            storeValue[n] = e;
        else if (n == 5)
            storeValue[n] = f;
        else
            storeValue[n] = (fn(n - 1) + fn(n - 2) + fn(n - 3) + fn(n - 4) + fn(n - 5) + fn(n - 6));
    }
    return storeValue[n];
}
int main()
{
    read();
    int n, caseno = 0, cases;
    scanf("%d", &cases);
    while (cases--)
    {
        mem(storeValue, 0);
        scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &n);
        printf("Case %d: %d\n", ++caseno, fn(n) % 10000007);
    }
    return 0;
}
