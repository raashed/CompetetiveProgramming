#include <bits/stdc++.h>

using namespace std;

int main() {
    int c = 5, n, t = 0;
    while (c--) {
        cin >> n;

        if ((n % 2) == 0) {
            t++;
        }
    }

    cout << t << " valores pares" << endl;

    return 0;
}