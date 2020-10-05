#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, h;
    double r;
    while (cin >> n >> h >> r)
    {
        cout << "NUMBER = " << n << endl;
        printf("SALARY = U$ %0.2lf\n", h * r);
    }

    return 0;
}
