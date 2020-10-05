#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long testCases;
    cin >> testCases;

    while (testCases--) {
        long long warriors;
        cin >> warriors;

        long long n = (long long) (sqrt(1 + 8 * warriors) - 1) / 2;
        cout << n << endl;
    }

    return 0;
}
