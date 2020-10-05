#include <bits/stdc++.h>

using namespace std;

int main() {
    int s;
    while (cin >> s) {
        int sec = 0;
        int minu = 0;
        int hour = 0;
        sec = s % 60;
        minu = s / 60;
        if (minu >= 60) {
            hour = minu / 60;
            minu = minu % 60;
        }
        cout << hour << ":" << minu << ":" << sec << endl;
    }

    return 0;
}
