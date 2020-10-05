#include <bits/stdc++.h>

using namespace std;

int val = 12;

int finish() {
    return 0;
}

int main() {
    int l;
    char T;
    double N[val][val];
    double sum = 0.0;

    cin >> l;
    cin >> T;

    for (int i = 0; i < val; i++) {
        for (int j = 0; j < val; j++) {
            cin >> N[i][j];

            if (i == l) {
                sum += N[i][j];
            }

        }
    }

    if (T == 'S') {
        printf("%.1f\n", sum);
    } else {
        printf("%.1f\n", (sum / 12.0));
    }

    finish();
}

