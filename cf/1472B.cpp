//
// Created by raashed on 1/17/21.
//

#include <bits/stdc++.h>

using namespace std;

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("../in.txt", "r", stdin);
    freopen("../out.txt", "w", stdout);
#endif
}

int main() {
    fastIO();
    int testCases, n, c1, c2, t;
    bool res;

    cin >> testCases;

    while (testCases--) {
        cin >> n;
        c1 = 0, c2 = 0;
        res = true;

        while (n--) {
            cin >> t;
            if (t == 1) {
                c1++;
            } else {
                c2++;
            }
        }

        if (c1 % 2) {
            res = false;
        } else if (c1 == 0 && (c2 % 2 != 0)) {
            res = false;
        }

        cout << (res ? "YES" : "NO") << endl;
    }

    return 0;
}
