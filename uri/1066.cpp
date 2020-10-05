#include <bits/stdc++.h>

using namespace std;

int main() {
    int c = 5, i, e = 0, o = 0, p = 0, n = 0;
    while (c--) {
        cin >> i;
        if (i > 0) {
            p++;
            if ((i % 2) == 0) {
                e++;
            } else {
                o++;
            }
        } else if (i < 0) {
            n++;
            if ((i % 2) == 0) {
                e++;
            } else {
                o++;
            }
        } else {
            e++;
        }
    }

    cout << e << " valor(es) par(es)" << endl;
    cout << o << " valor(es) impar(es)" << endl;
    cout << p << " valor(es) positivo(s)" << endl;
    cout << n << " valor(es) negativo(s)" << endl;
    return 0;
}