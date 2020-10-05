#include <bits/stdc++.h>

using namespace std;

int main()
{
    char name[MAX_LENGTH] = {0};
    double s, n;
    cin.getline(name, MAX_LENGTH);
    while (cin >> s >> n)
    {
        printf("TOTAL = R$ %0.2lf\n", ((n * 15) / 100) + s);
    }

    return 0;
}
