//
// Created by Mohammad Rashedul Islam on 8/4/20.
//

#include <bits/stdc++.h>

using namespace std;

vector<vector<char>> sky;
vector<vector<bool>> isVisited;
int resultCount;

void dfs(int x, int y, char c) {
    if (isVisited[x][y] || sky[x][y] != c) return;
    isVisited[x][y] = true;
    resultCount++;
    if (x > 0) {
        dfs(x - 1, y, c);
    }
    if (y > 0) {
        dfs(x, y - 1, c);
    } else {
        dfs(x, (int) sky[x].size() - 1, c);
    }
    if (y < sky[x].size() - 1) {
        dfs(x, y + 1, c);
    } else {
        dfs(x, 0, c);
    }
    if (x < sky.size() - 1) {
        dfs(x + 1, y, c);
    }
}

int main() {
    int row, column;
    while (cin >> row >> column) {
        sky.clear();
        sky.resize(row);
        isVisited.clear();
        isVisited.resize(row);
        for (int i = 0; i < row; i++) {
            sky[i].clear();
            sky[i].resize(column);
            isVisited[i].clear();
            isVisited[i].resize(column);
            for (int j = 0; j < column; j++) {
                cin >> sky[i][j];
                isVisited[i][j] = false;
            }
        }
        int x, y;
        cin >> x >> y;
        char c = sky[x][y];
        resultCount = 0;
        dfs(x, y, c);
        int answerCount = 0;
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < column; j++) {
                if (!isVisited[i][j] && sky[i][j] == c) {
                    resultCount = 0;
                    dfs(i, j, c);
                    answerCount = max(answerCount, resultCount);
                }
            }
        }
        cout << answerCount << endl;
    }
    return 0;
}
