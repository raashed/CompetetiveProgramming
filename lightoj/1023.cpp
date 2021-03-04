//
// Created by rashe on 3/4/2021.
//

#include<iostream>
#include<vector>
#include<string>
#include <algorithm>

using namespace std;

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    FILE *stream;
    freopen_s(&stream, "../in.txt", "r", stdin);
#endif
}

int n, k, c;

void permutation(string str) {
    sort(str.begin(), str.end());
    do {
        c++;
        cout << str << endl;
        if (c == k) {
            break;
        }
    } while (next_permutation(str.begin(), str.end()));
}

string makeString(int l) {
    string string1;
    for (int i = 0; i < l; i++) {
        string1.push_back('A' + i);
    }
    return string1;
}

int main() {
    fastIO();
    int tc;

    cin >> tc;

    for (int i = 0; i < tc; i++) {
        cin >> n >> k;
        c = 0;
        cout << "Case " << i + 1 << ":" << endl;
        permutation(makeString(n));
    }

    return 0;
}
