#include <bits/stdc++.h>

using namespace std;

int main()
{
    double A, B;
    while (cin >> A >> B)
    {
        printf("MEDIA = %0.5lf\n", ((A * 3.5) + (B * 7.5)) / (3.5 + 7.5));
    }

    return 0;
}
