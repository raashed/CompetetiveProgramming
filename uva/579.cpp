//
// Created by raashed on 3/31/20.
//

#include <bits/stdc++.h>

using namespace std;

#define READ    freopen("/home/raashed/CLionProjects/Programming/in.txt", "r", stdin)
#define WRITE   freopen("/home/raashed/CLionProjects/Programming/out.txt", "w", stdout)

int main()
{
//    READ;
//    WRITE;

    int hour, min;
    while (true)
    {
        scanf("%d:%d", &hour, &min);
        if (hour == 0 && min == 0)
        {
            break;
        }
        double x = (hour * 30) + (min * 0.5);
        double y = (min * 6);
        double ans = abs(x - y);
        if (ans > 180)
        {
            ans = abs(ans - 360);
        }

        printf("%.3f\n", ans);
    }

    return 0;
}