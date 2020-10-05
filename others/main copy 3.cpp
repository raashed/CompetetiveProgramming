#include <bits/stdc++.h>

using namespace std;

int main() {
    int x = 1;
    while (x) {
        int m, n;
        cin >> m >> n;
        if (m > 0 && n > 0) {
            if (x != 1)
                cout << endl;
            int a[m][n];
            for (int i = 0; i < m; i++) {
                for (int j = 0; j < n; j++) {
                    char c;
                    cin >> c;
                    if (c == '.')
                        a[i][j] = 0;
                    if (c == '*')
                        a[i][j] = 9;
                }
            }

            for (int i = 0; i < m; i++) {
                for (int j = 0; j < n; j++) {
                    if (a[i][j] == 9) {
                        if (i > 0)
                            if (a[i - 1][j] != 9)
                                a[i - 1][j] += 1;

                        if (i < m - 1)
                            if (a[i + 1][j] != 9)
                                a[i + 1][j] += 1;

                        if (j > 0)
                            if (a[i][j - 1] != 9)
                                a[i][j - 1] += 1;

                        if (j < n - 1)
                            if (a[i][j + 1] != 9)
                                a[i][j + 1] += 1;

                        if (i > 0 && j > 0)
                            if (a[i - 1][j - 1] != 9)
                                a[i - 1][j - 1] += 1;

                        if (i < m - 1 && j > 0)
                            if (a[i + 1][j - 1] != 9)
                                a[i + 1][j - 1] += 1;

                        if (i > 0 && j < n - 1)
                            if (a[i - 1][j + 1] != 9)
                                a[i - 1][j + 1] += 1;

                        if (i < m - 1 && j < n - 1)
                            if (a[i + 1][j + 1] != 9)
                                a[i + 1][j + 1] += 1;
                    }
                }
            }
            cout << "Field #" << x++ << ":" << endl;
            for (int i = 0; i < m; i++) {
                for (int j = 0; j < n; j++)
                    if (a[i][j] == 9)
                        cout << "*";
                    else
                        cout << a[i][j];
                cout << endl;
            }
        } else
            return 0;
    }
    return 0;
}

/*
5 5
. . . * .
. * . . *
. . * . .
* . . . .
* . . * .
6 5
* . * . *
. * . * .
* . * . *
. * . * .
* . * . *
. * . * .
4 4
* . . .
. . . .
. * . .
. . . .
3 5
* * . . .
. . . . .
. * . . .
0 0

 */