//
// Created by Mohammad Rashedul Islam on 6/4/20.
//

#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> vector1;
vector<bool> vector2;

void input(char c) {
    vector1.clear();
    vector1.assign(c - 'A' + 1, {});
    vector2.clear();
    vector2.assign(c - 'A' + 1, false);
    string string1;
    while (getline(cin, string1) && !string1.empty()) {
        vector1[string1[0] - 'A'].emplace_back(string1[1] - 'A');
        vector1[string1[1] - 'A'].emplace_back(string1[0] - 'A');
    }
}

void dfs(int x) {
    if (!vector2[x]) {
        vector2[x] = !vector2[x];
        for (int p : vector1[x]) {
            dfs(p);
        }
    }
}

int main() {
    int n;
    cin >> n;
    cin.ignore();
    while (n--) {
        char c;
        cin >> c;
        cin.ignore();
        input(c);
        int ans = 0;
        for (int x = 'A'; x <= c; x++) {
            if (!vector2[x - 'A']) {
                dfs(x - 'A');
                ans++;
            }
        }
        cout << ans << endl;
        if (n != 0) {
            cout << endl;
        }
    }
    return 0;
}
