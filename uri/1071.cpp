#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x, y, sum = 0;

    cin >> x >> y;

    if (x > y)
    {
        for (y = y + 1; y < x; y++)
        {
            if ((y % 2) != 0)
            {
                sum += y;
            }
        }
    }
    else if (y > x)
    {
        for (x = x + 1; x < y; x++)
        {
            if ((x % 2) != 0)
            {
                sum += x;
            }
        }
    }
    else
    {
        sum = 0;
    }

    cout << sum << endl;

    return 0;
}
