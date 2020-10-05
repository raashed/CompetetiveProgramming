//
// Created by Mohammad Rashedul Islam on 1/4/20.
//

#include <bits/stdc++.h>

using namespace std;

#define READ    freopen("../in.txt", "r", stdin)
#define WRITE   freopen("../out.txt", "w", stdout)
#define watch(x, y)     cout << "(" << (x) << "," << (y) << ")" << endl

vector<vector<int>> community;
vector<vector<bool>> visited;

void dfs(int x, int y) {
    visited[x][y] = true;
    community[x][y] = 0;
    if (x > 0 && community[x - 1][y] == 1 && !visited[x - 1][y]) {
        dfs(x - 1, y);
    }
    if (x > 0 && y < community[x].size() - 1 && community[x - 1][y + 1] == 1 && !visited[x - 1][y + 1]) {
        dfs(x - 1, y + 1);
    }
    if (x > 0 && y > 0 && community[x - 1][y - 1] == 1 && !visited[x - 1][y - 1]) {
        dfs(x - 1, y - 1);
    }
    if (x < community.size() - 1 && community[x + 1][y] == 1 && !visited[x + 1][y]) {
        dfs(x + 1, y);
    }
    if (x < community.size() - 1 && y < community[x].size() - 1 && community[x + 1][y + 1] == 1 &&
        !visited[x + 1][y + 1]) {
        dfs(x + 1, y + 1);
    }
    if (x < community.size() - 1 && y > 0 && community[x + 1][y - 1] == 1 && !visited[x + 1][y - 1]) {
        dfs(x + 1, y - 1);
    }
    if (y < community[x].size() - 1 && community[x][y + 1] == 1 && !visited[x][y + 1]) {
        dfs(x, y + 1);
    }
    if (y > 0 && community[x][y - 1] == 1 && !visited[x][y - 1]) {
        dfs(x, y - 1);
    }
}

int main() {
    //    READ, WRITE;
    int row, column;
    while (true) {
        cin >> row >> column;
        if (row == 0) {
            break;
        }

        community.clear();
        visited.clear();

        vector<int> v(column);
        community.assign(row, v);
        vector<bool> v1(column, false);
        visited.assign(row, v1);

        char c;
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < column; j++) {
                cin >> c;

                if (c == '@') {
                    community[i][j] = 1;
                }
                if (c == '*') {
                    community[i][j] = 0;
                    visited[i][j] = true;
                }
            }
        }

        int count = 0;
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < column; j++) {
                if (!visited[i][j] && community[i][j] == 1) {
                    dfs(i, j);
                    count++;
                }
            }
        }

        cout << count << endl;
    }

    return 0;
}