//
// Created by rashe on 4/8/2020.
//

#include <bits/stdc++.h>

using namespace std;

vector<int> checkRow, checkColumn;
vector<vector<char>> fullArea;
vector<vector<bool>> isVisited;
int result;

void dfs(int r, int c) {
    if (r == fullArea.size() || r < 0 || c == fullArea[0].size() || c < 0 || fullArea[r][c] == 'L' || isVisited[r][c]) {
        return;
    }
    isVisited[r][c] = true;
    result++;

    for (int i = 0; i < checkRow.size(); i++) {
        dfs(r + checkRow[i], c + checkColumn[i]);
    }
}

int main() {
    checkRow = {-1, 0, 1, 0, -1, 1, 1, -1};
    checkColumn = {0, 1, 0, -1, 1, 1, -1, -1};
    int testCases;
    cin >> testCases;
    cin.ignore(100, '\n');
    cin.ignore(100, '\n');
    while (testCases--) {
        fullArea.clear();
        isVisited.clear();
        string string1;
        int x = 0;
        while (getline(cin, string1) && !string1.empty()) {
            if (string1[0] == 'L' || string1[0] == 'W') {
                fullArea.emplace_back(vector<char>(string1.begin(), string1.end()));
                isVisited.emplace_back(vector<bool>(string1.size(), false));
            } else {
                stringstream stringstream1(string1);
                int i, j;
                stringstream1 >> i >> j;
                result = 0;
                isVisited.clear();
                isVisited.assign(fullArea.size(), vector<bool>(fullArea[0].size(), false));
                dfs(i - 1, j - 1);
                cout << result << endl;
            }
        }
        if (testCases) {
            cout << endl;
        }
    }
    return 0;
}
