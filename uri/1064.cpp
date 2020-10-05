#include <bits/stdc++.h>

using namespace std;

int main() {
    int c = 6, t = 0;
    double n, s = 0.0;
    while (c--) {
        cin >> n;

        if (n > 0) {
            t++;
            s += n;
        }
    }

    cout << t << " valores positivos" << endl;
    printf("%.1f\n", (s / t));

    return 0;
}