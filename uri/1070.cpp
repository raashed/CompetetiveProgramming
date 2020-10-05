#include <bits/stdc++.h>

using namespace std;

int main() {
    int x, y = 0;

    cin >> x;
    for (x = x + 1; x < x + 20; x++) {
        if (y == 6) {
            break;
        } else {
            if ((x % 2) != 0) {
                cout << x << endl;
                y++;
            }
        }
    }
    return 0;
}