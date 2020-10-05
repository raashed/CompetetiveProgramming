//
// Created by Mohammad Rashedul Islam on 6/4/20.
//

#include <bits/stdc++.h>

using namespace std;

vector<vector<char>> vector1;
bool isWin;

void input(int n) {
    vector1.clear();
    vector1.assign(n, vector<char>(n, {}));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> vector1[i][j];
        }
    }
    isWin = false;
}

void dfs(int i, int j) {
    if (vector1[i][j] == 'w' && !isWin) {
        if (j == vector1.size() - 1) {
            isWin = true;
        }
        vector1[i][j] = 'b';
        if (i > 0 && j > 0) {
            dfs(i - 1, j - 1);
        }
        if (j > 0) {
            dfs(i, j - 1);
        }
        if (i > 0) {
            dfs(i - 1, j);
        }
        if (i < vector1.size() - 1) {
            dfs(i + 1, j);
        }
        if (j < vector1.size() - 1) {
            dfs(i, j + 1);
        }
        if (i < vector1.size() - 1 && j < vector1.size() - 1) {
            dfs(i + 1, j + 1);
        }
    }
}

int main() {
    int n, testCase = 1;

    while (cin >> n && n != 0) {
        input(n);

        for (int i = 0; i < vector1.size() && !isWin; i++) {
            if (vector1[i][0] == 'w') {
                dfs(i, 0);
            }
        }

        if (isWin) {
            cout << testCase++ << " " << "W" << endl;
        } else {
            cout << testCase++ << " " << "B" << endl;
        }
    }
    return 0;
}
