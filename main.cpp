#include <bits/stdc++.h>

using namespace std;

void fastIO();

void build(int v, int tl, int tr);

void update(int v, int tl, int tr, int pos, char new_val);

char getVal(int v, int tl, int tr, int pos);

string binaryString, binaryTreeString;

int main() {
    fastIO();

    int testCases, testCase, queryNumber, left, right, currentIndex;
    char queryType, currentChar;

    cin >> testCases;

    for (testCase = 1; testCase <= testCases; testCase++) {
        cout << "Case " << testCase << ":" << endl;

        cin >> binaryString >> queryNumber;

        binaryTreeString.resize(4 * binaryString.size() + 5);
        build(1, 0, (int) binaryString.size());

        while (queryNumber--) {
            cin >> queryType;

            if (queryType == 'I') {
                cin >> left >> right;
                currentIndex = left - 1;
                while (currentIndex < right) {
                    update(1, 0, (int) binaryString.size(), currentIndex,
                           binaryString[currentIndex] == '0' ? '1' : '0');
                    binaryString[currentIndex] = binaryString[currentIndex] == '0' ? '1' : '0';
                    currentIndex++;
                }

            }
            if (queryType == 'Q') {
                cin >> left;
                cout << getVal(1, 0, (int) binaryString.size(), left - 1) << endl;
            }
        }

        binaryString.clear();
        binaryTreeString.clear();
        cin.ignore();
    }

    return 0;
}

void build(int v, int tl, int tr) {
    if (tl == tr) {
        binaryTreeString[v] = binaryString[tl];
        return;
    }

    int tm = (tl + tr) / 2;
    build(v * 2, tl, tm);
    build(v * 2 + 1, tm + 1, tr);
}

void update(int v, int tl, int tr, int pos, char new_val) {
    if (tl == tr) {
        binaryTreeString[v] = new_val;
        return;
    }

    int tm = (tl + tr) / 2;
    if (pos <= tm) {
        update(v * 2, tl, tm, pos, new_val);
        return;
    }

    update(v * 2 + 1, tm + 1, tr, pos, new_val);
}

char getVal(int v, int tl, int tr, int pos) {
    if (tl == tr) {
        return binaryTreeString[v];
    }

    int tm = (tl + tr) / 2;
    if (pos <= tm) {
        return getVal(v * 2, tl, tm, pos);
    }

    return getVal(v * 2 + 1, tm + 1, tr, pos);
}

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    FILE *stream;
    freopen_s(&stream, "../in.txt", "r", stdin);
    freopen_s(&stream, "../out.txt", "w", stdout);
#endif
}
