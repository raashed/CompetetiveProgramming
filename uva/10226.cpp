#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <map>

using namespace std;

void readIO() {
    freopen("../in.txt", "r", stdin);
    freopen("../out.txt", "w", stdout);
}

int main() {
    readIO();
    int tc;
    cin >> tc;
    cin.ignore();
    cin.ignore();
    while (tc--) {
        map<string, int> dictionary;
        string treeData;
        int cnt = 0;
        while (getline(cin, treeData)) {
            if (treeData.empty()) break;
            dictionary[treeData]++;
            cnt++;
        }
        for (auto &i: dictionary) {
            auto x = (i.second * 100.0) / cnt;
            cout << i.first;
            printf(" %.4f\n", x);
        }
        if (tc) {
            cout << endl;
        }
    }
    return 0;
}
