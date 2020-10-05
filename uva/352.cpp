//
// Created by Mohammad Rashedul Islam on 6/4/20.
//

#include <bits/stdc++.h>

using namespace std;

vector<vector<char>> vector1;

void input(int n) {
    vector1.clear();
    vector1.assign(n, vector<char>(n));
    string string1;
    for (auto &i : vector1) {
        cin >> string1;
        vector<char> v(string1.begin(), string1.end());
        vector1.push_back(v);
    }
}

void dfs(int i, int j) {
    if (vector1[i][j] == '1') {
        vector1[i][j] = 0;
        if (i > 0 && j > 0) {
            dfs(i - 1, j - 1);
        }
        if (i > 0) {
            dfs(i - 1, j);
        }
        if (i > 0 && j < vector1.size() - 1) {
            dfs(i - 1, j + 1);
        }
        if (j > 0) {
            dfs(i, j - 1);
        }
        if (j < vector1.size() - 1) {
            dfs(i, j + 1);
        }
        if (i < vector1.size() - 1 && j > 0) {
            dfs(i + 1, j - 1);
        }
        if (i < vector1.size() - 1) {
            dfs(i + 1, j);
        }
        if (i < vector1.size() - 1 && j < vector1.size() - 1) {
            dfs(i + 1, j + 1);
        }
    }
}

int main() {
    int n, testCase = 1;
    while (cin >> n) {
        input(n);
        int ans = 0;
        for (int i = 0; i < vector1.size(); i++) {
            for (int j = 0; j < vector1[i].size(); j++) {
                if (vector1[i][j] == '1') {
                    dfs(i, j);
                    ans++;
                }
            }
        }
        cout << "Image number " << testCase++ << " contains " << ans << " war eagles." << endl;
    }
    return 0;
}
