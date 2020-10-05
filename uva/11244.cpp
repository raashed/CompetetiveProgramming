//
// Created by Mohammad Rashedul Islam on 8/4/20.
//

#include <bits/stdc++.h>

using namespace std;

vector<vector<char>> sky;
vector<vector<bool>> isVisited;
int resultCount;

void dfs(int x, int y) {
    if (!isVisited[x][y] && sky[x][y] == '*') {
        isVisited[x][y] = true;
        sky[x][y] = '.';
        resultCount++;
        if (x > 0 && y > 0 && sky[x - 1][y - 1] != '.' && !isVisited[x - 1][y - 1]) {
            dfs(x - 1, y - 1);
        }
        if (x > 0 && sky[x - 1][y] != '.' && !isVisited[x - 1][y]) {
            dfs(x - 1, y);
        }
        if (x > 0 && y < sky[x].size() - 1 && sky[x - 1][y + 1] != '.' && !isVisited[x - 1][y + 1]) {
            dfs(x - 1, y + 1);
        }
        if (y > 0 && sky[x][y - 1] != '.' && !isVisited[x][y - 1]) {
            dfs(x, y - 1);
        }
        if (y < sky[x].size() - 1 && sky[x][y + 1] != '.' && !isVisited[x][y + 1]) {
            dfs(x, y + 1);
        }
        if (x < sky.size() - 1 && y > 0 && sky[x + 1][y - 1] != '.' && !isVisited[x + 1][y - 1]) {
            dfs(x + 1, y - 1);
        }
        if (x < sky.size() - 1 && sky[x + 1][y] != '.' && !isVisited[x + 1][y]) {
            dfs(x + 1, y);
        }
        if (x < sky.size() - 1 && y < sky[x].size() - 1 && sky[x + 1][y + 1] != '.' && !isVisited[x + 1][y + 1]) {
            dfs(x + 1, y + 1);
        }
    }
}

int main() {
    int row, column;
    while (cin >> row >> column, row != 0 || column != 0) {
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
        int answerCount = 0;
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < column; j++) {
                if (!isVisited[i][j] && sky[i][j] == '*') {
                    resultCount = 0;
                    dfs(i, j);
                    if (resultCount == 1) {
                        answerCount++;
                    }
                }
            }
        }
        cout << answerCount << endl;
    }
    return 0;
}
