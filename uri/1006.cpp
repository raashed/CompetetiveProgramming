#include <bits/stdc++.h>

using namespace std;

int main()
{
    double A, B, C;
    while (cin >> A >> B >> C)
    {
        printf("MEDIA = %0.1lf\n", ((A * 2) + (B * 3) + (C * 5)) / (2 + 3 + 5));
    }

    return 0;
}
