//
// Created by Mohammad Rashedul Islam on 28/3/20.
//

#include <bits/stdc++.h>

using namespace std;

int main()
{
    //    freopen("/Volumes/HDD-2/Works/Programming/in.txt", "r", stdin);
    double n, p;
    while (cin >> n >> p)
    {
        printf("%.0lf\n", pow(p, 1 / n));
    }
    return 0;
}
