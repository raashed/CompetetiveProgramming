#include <bits/stdc++.h>

using namespace std;

int main()
{
    int c, n, in = 0, out = 0;

    cin >> c;
    while (c--)
    {
        cin >> n;

        if ((n >= 10) && (n <= 20))
        {
            in++;
        }
        else
        {
            out++;
        }
    }

    cout << in << " in" << endl;
    cout << out << " out" << endl;

    return 0;
}