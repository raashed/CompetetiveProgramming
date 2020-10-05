#include <bits/stdc++.h>
using namespace std;

int main()
{
    int G, i, j, N;
    N = 10;
    G = 0;
    for (i = 1; i < N; i++)
        for (j = i + 1; j <= N; j++)
            G += __gcd(i, j);
    cout << G << endl;
    return 0;
}