//
// Created by rashe on 4/8/2020.
//

#include <bits/stdc++.h>

using namespace std;

vector<vector<char>> battleShip;
vector<vector<bool>> isVisited;

void dfs(int x, int y) {
    if (!isVisited[x][y]) {
        isVisited[x][y] = true;
        battleShip[x][y] = '.';
        if (x > 0 && battleShip[x - 1][y] != '.' && !isVisited[x - 1][y]) {
            dfs(x - 1, y);
        }
        if (y > 0 && battleShip[x][y - 1] != '.' && !isVisited[x][y - 1]) {
            dfs(x, y - 1);
        }
        if (y < battleShip[x].size() - 1 && battleShip[x][y + 1] != '.' && !isVisited[x][y + 1]) {
            dfs(x, y + 1);
        }
        if (x < battleShip.size() - 1 && battleShip[x + 1][y] != '.' && !isVisited[x + 1][y]) {
            dfs(x + 1, y);
        }
    }

}

int main() {
    int testCases;
    cin >> testCases;
    for (int testCase = 1; testCase <= testCases; testCase++) {
        int n;
        cin >> n;
        battleShip.clear();
        battleShip.resize(n);
        isVisited.clear();
        isVisited.resize(n);
        for (int i = 0; i < battleShip.size(); i++) {
            battleShip[i].clear();
            battleShip[i].resize(n);
            isVisited[i].clear();
            isVisited[i].resize(n);
            for (int j = 0; j < battleShip[i].size(); j++) {
                cin >> battleShip[i][j];
                isVisited[i][j] = false;
            }
        }

        int result = 0;
        for (int i = 0; i < battleShip.size(); i++) {
            for (int j = 0; j < battleShip[i].size(); j++) {
                if (!isVisited[i][j] && battleShip[i][j] == 'x') {
                    dfs(i, j);
                    result++;
                }
            }
        }

        cout << "Case " << testCase << ": " << result << endl;
    }
    return 0;
}
