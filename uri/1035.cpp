#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (b > c && d > a) {
        if (c + d > a + b) {
            if (c > 0 && d > 0) {
                if (a % 2 == 0) {
                    cout << "Valores aceitos";
                } else {
                    cout << "Valores nao aceitos";
                }
            } else {
                cout << "Valores nao aceitos";
            }
        } else {
            cout << "Valores nao aceitos";
        }
    } else {
        cout << "Valores nao aceitos";
    }
    cout << endl;

    return 0;
}
