#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, n;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n;

        int a, b;
        a = n / 2;
        b = n - a;
        cout << a << " " << b << endl;
    }
    return 0;
}