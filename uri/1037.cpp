#include <bits/stdc++.h>

using namespace std;

int main() {
    double a;
    while (cin >> a) {
        if ((a > 100) || (a < 0)) {
            cout << "Fora de intervalo" << endl;
        } else {
            if ((a >= 0) && (a <= 25)) {
                cout << "Intervalo [0,25]" << endl;
            } else if ((a > 25) && (a <= 50)) {
                cout << "Intervalo (25,50]" << endl;
            } else {
                cout << "Intervalo (75,100]" << endl;
            }
        }
    }

    return 0;
}
