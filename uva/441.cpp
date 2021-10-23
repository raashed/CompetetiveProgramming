#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <map>
#include <sstream>
#include <stack>

using namespace std;

void readIO() {
    freopen("../in.txt", "r", stdin);
    freopen("../out.txt", "w", stdout);
}

int main() {
    //readIO();
    bool first = true;
    while (true) {
        int n;
        cin >> n;
        if (n == 0) {
            break;
        }

        vector<int> vector1(n);
        for (int i = 0; i < n; i++) {
            cin >> vector1[i];
        }

        if (!first) {
            cout << endl;
        }

        first = false;

        for (int i = 0; i < vector1.size() - 5; i++) {
            for (int ii = i + 1; ii < vector1.size() - 4; ii++) {
                for (int iii = ii + 1; iii < vector1.size() - 3; iii++) {
                    for (int iiii = iii + 1; iiii < vector1.size() - 2; iiii++) {
                        for (int iiiii = iiii + 1; iiiii < vector1.size() - 1; iiiii++) {
                            for (int iiiiii = iiiii + 1; iiiiii < vector1.size(); iiiiii++) {
                                cout << vector1[i] << " " << vector1[ii] << " " << vector1[iii] << " " << vector1[iiii]
                                     << " " << vector1[iiiii] << " " << vector1[iiiiii] << endl;
                            }
                        }
                    }
                }
            }
        }

    }
    return 0;
}

