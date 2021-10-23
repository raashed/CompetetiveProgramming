#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <map>
#include <sstream>

using namespace std;

void readIO() {
    freopen("../in.txt", "r", stdin);
    freopen("../out.txt", "w", stdout);
}

int main() {
    //readIO();
    int tc;
    cin >> tc;
    cin.ignore();

    while (tc--) {
        cin.ignore();
        vector<int> vector1;
        vector<string> vector2;
        string string1, string2;
        int x;
        string y;

        getline(cin, string1);
        getline(cin, string2);

        stringstream stringstream1(string1);
        stringstream stringstream2(string2);

        while (!stringstream1.eof()) {
            stringstream1 >> x;
            vector1.push_back(x);
        }

        while (!stringstream2.eof()) {
            stringstream2 >> y;
            vector2.push_back(y);
        }

        map<int, string> allData;
        for (int p = 0; p < vector1.size(); ++p) {
            allData[vector1[p]] = vector2[p];
        }

        for (const auto& p: allData) {
            cout << p.second << endl;
        }

        if (tc) {
            cout << endl;
        }
    }
    return 0;
}
