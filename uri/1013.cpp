#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, s;
    cin >> a >> b >> s;
    int x = a + b + abs(a - b);
    int x2 = x / 2;
    int y = x2 + s + abs(x2 - s);
    int y2 = y / 2;
    cout << y2 << " eh o maior" << endl;

    return 0;
}
