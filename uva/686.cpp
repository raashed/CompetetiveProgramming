#include <bits/stdc++.h>

using namespace std;
#define length 32768

int myFunction(int a[]);

int main() {
    int a[length];
    myFunction(a);

    int n;
    while (true) {
        cin >> n;
        if (n == 0) {
            break;
        }

        int count = 0;
        for (int i = 2; i <= n / 2; i++) {
            if (a[i] == 1 && a[n - i] == 1) {
                count = count + 1;
            }
        }

        cout << count << endl;
    }
    return 0;
}

int myFunction(int a[]) {
    for (int i = 0; i <= length; i++) {
        a[i] = 1;
    }
    for (int i = 2; i <= sqrt(length); i++) {
        if (a[i] == 1) {
            for (int j = i * 2; j <= length; j = j + i) {
                a[j] = 0;
            }
        }
    }

    return 1;
}
