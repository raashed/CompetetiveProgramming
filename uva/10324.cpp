#include <iostream>

using namespace std;

bool decodeTheMadMan(string string1, int start, int end) {
    bool status = true;
    char firstChar = string1[start];

    while (start <= end) {
        if (string1[start++] != firstChar) {
            status = false;
            break;
        }
    }

    return status;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int caseNo = 1;
    string string1;
    while (getline(cin, string1)) {
        printf("Case %d:\n", caseNo++);
        int testCases;
        cin >> testCases;

        while (testCases--) {
            int i, j;
            cin >> i >> j;

            bool answer = decodeTheMadMan(string1, min(i, j), max(i, j));
            cout << (answer ? "Yes" : "No") << endl;
        }

        cin.ignore();
    }

    return 0;
}
