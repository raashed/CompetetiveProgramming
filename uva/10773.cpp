//
// Created by Mohammad Rashedul Islam on 1/4/20.
//

#include <bits/stdc++.h>

using namespace std;

#define READ        freopen("../in.txt", "r", stdin)
#define WRITE       freopen("../out.txt", "w", stdout)
#define watch2(x, y)     cout << (x) << "," << (y) << endl
#define watch1(x)     cout << (x) << endl

int main() {
    //    READ, WRITE;
    int testCases;
    cin >> testCases;
    for (int testCase = 1; testCase <= testCases; testCase++) {
        int d, u, v;
        cin >> d >> v >> u;
        double t1 = (d * 1.0) / u;
        double t2 = d / sqrt(u * u - v * v);
        if (v >= u || t1 == t2) {
            cout << "Case " << testCase << ": can't determine" << endl;
        } else {
            printf("Case %d: %.3f\n", testCase, t2 - t1);
        }
    }
    return 0;
}
