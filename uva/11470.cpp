//
// Created by Mohammad Rashedul Islam on 1/4/20.
//

#include <bits/stdc++.h>

using namespace std;

#define READ        freopen("../in.txt", "r", stdin)
#define WRITE       freopen("../out.txt", "w", stdout)
#define watch2(x, y)     cout << (x) << "," << (y) << endl
#define watch1(x)     cout << (x) << endl

int main() {
    //    READ, WRITE;
    int grid, testCase = 1;
    while (cin >> grid, grid != 0) {
        cout << "Case " << testCase++ << ":";
        vector<int> v(grid, {});
        vector<vector<int>> square(grid, v);
        for (int i = 0; i < grid; i++) {
            for (int j = 0; j < grid; j++) {
                cin >> square[i][j];
            }
        }
        if (grid % 2) {
            for (int row = 0; row <= ceil(grid / 2); row++) {
                int sum = 0;
                for (int column = row; column <= ceil(grid / 2); column++) {
                    if (grid % 2 && column == ceil(grid / 2)) {
                        sum += square[row][column];
                        square[row][column] = 0;
                        sum += square[grid - 1 - column][grid - 1 - row];
                        square[grid - 1 - column][grid - 1 - row] = 0;
                        sum += square[grid - 1 - column][row];
                        square[grid - 1 - column][row] = 0;
                        sum += square[grid - 1 - row][grid - 1 - column];
                        square[grid - 1 - row][grid - 1 - column] = 0;
                    } else {
                        sum += square[row][column];
                        square[row][column] = 0;
                        sum += square[row][grid - 1 - column];
                        square[row][grid - 1 - column] = 0;
                        sum += square[column][grid - 1 - row];
                        square[column][grid - 1 - row] = 0;
                        sum += square[grid - 1 - column][grid - 1 - row];
                        square[grid - 1 - column][grid - 1 - row] = 0;
                        sum += square[column][row];
                        square[column][row] = 0;
                        sum += square[grid - 1 - column][row];
                        square[grid - 1 - column][row] = 0;
                        sum += square[grid - 1 - row][column];
                        square[grid - 1 - row][column] = 0;
                        sum += square[grid - 1 - row][grid - 1 - column];
                        square[grid - 1 - row][grid - 1 - column] = 0;
                    }
                }
                cout << " " << sum;
            }
            cout << endl;
        } else {
            for (int row = 0; row < ceil(grid / 2); row++) {
                int sum = 0;
                for (int column = row; column < ceil(grid / 2); column++) {
                    sum += square[row][column];
                    square[row][column] = 0;
                    sum += square[row][grid - 1 - column];
                    square[row][grid - 1 - column] = 0;
                    sum += square[column][grid - 1 - row];
                    square[column][grid - 1 - row] = 0;
                    sum += square[grid - 1 - column][grid - 1 - row];
                    square[grid - 1 - column][grid - 1 - row] = 0;
                    sum += square[column][row];
                    square[column][row] = 0;
                    sum += square[grid - 1 - column][row];
                    square[grid - 1 - column][row] = 0;
                    sum += square[grid - 1 - row][column];
                    square[grid - 1 - row][column] = 0;
                    sum += square[grid - 1 - row][grid - 1 - column];
                    square[grid - 1 - row][grid - 1 - column] = 0;
                }
                cout << " " << sum;
            }
            cout << endl;
        }
    }
    return 0;
}
