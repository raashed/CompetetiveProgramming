#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCase;
    cin >> testCase;
    while (testCase--) {
        int farmerNumber;
        cin >> farmerNumber;
        long long total = 0;
        for (int i = 0; i < farmerNumber; i++) {
            long area, space, premium;
            cin >> area >> space >> premium;
            total += area * premium;
        }
        cout << total << endl;
    }
    return 0;
}
