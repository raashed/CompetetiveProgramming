//
// Created by raashed on 3/28/20.
//

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c, d, e, f, g, h, i, m, t;
    string s;
    while (cin >> a >> b >> c >> d >> e >> f >> g >> h >> i)
    {
        m = INT_MAX;
        t = c + b + d + e + g + i;
        if (t < m)
        {
            m = t;
            s = "BCG";
        }
        t = c + b + d + f + g + h;
        if (t < m)
        {
            m = t;
            s = "BGC";
        }
        t = a + b + f + e + g + i;
        if (t < m)
        {
            m = t;
            s = "CBG";
        }
        t = a + b + d + f + h + i;
        if (t < m)
        {
            m = t;
            s = "CGB";
        }
        t = c + a + f + e + g + h;
        if (t < m)
        {
            m = t;
            s = "GBC";
        }
        t = c + a + d + e + h + i;
        if (t < m)
        {
            m = t;
            s = "GCB";
        }
        cout << s << " " << m << endl;
    }
    return 0;
}
