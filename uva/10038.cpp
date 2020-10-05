#include <bits/stdc++.h>

using namespace std;

int main() {
//    freopen("/Volumes/HDD-2/Works/programming/in.txt", "r", stdin);
    int n, t, i;
    vector<int> vi, m(3010, 0);
    bool f;
    while (scanf("%d", &n) == 1) {
        vi.clear();
        for (i = 0; i < n; i++) {
            cin >> t;
            vi.emplace_back(t);
        }
        m.clear();
        m.resize(3001, 0);
        f = false;
        for (i = 1; i < n; i++) {
            if (abs(vi[i] - vi[i - 1]) < n) {
                m[abs(vi[i] - vi[i - 1])]++;
            }
        }
        for (i = 1; i < n; i++) {
            if (m[i] == 0) {
                f = true;
            }
        }
        if (f) {
            cout << "Not jolly" << endl;
        } else {
            cout << "Jolly" << endl;
        }
    }
    return 0;
}