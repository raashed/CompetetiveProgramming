#include <bits/stdc++.h>

using namespace std;

int main() {
    int c = 6, t = 0;
    double n;
    while (c--) {
        cin >> n;

        if (n > 0) {
            t++;
        }
    }

    cout << t << " valores positivos" << endl;

    return 0;
}