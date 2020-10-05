#include <bits/stdc++.h>

using namespace std;

int main() {
    int c, n;
    cin >> c;
    while (c--) {
        cin >> n;
        if (n > 0) {
            if (n % 2 == 0) {
                cout << "EVEN POSITIVE" << endl;
            } else {
                cout << "ODD POSITIVE" << endl;
            }
        } else if (n < 0) {
            if (n % 2 == 0) {
                cout << "EVEN NEGATIVE" << endl;
            } else {
                cout << "ODD NEGATIVE" << endl;
            }
        } else {
            cout << "NULL" << endl;
        }
    }

    return 0;
}
