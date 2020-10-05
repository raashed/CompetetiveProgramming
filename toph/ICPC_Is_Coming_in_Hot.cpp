#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string string1;
    getline(cin, string1);

    vector<int> v(10);
    for (char i : string1) {
        v[i - '0']++;
    }

    int max = 0, index = 0;
    for (int i = 0; i < v.size(); ++i) {
        if (max < v[i]) {
            max = v[i];
            index = i;
        }
    }

    cout << index << endl;

    return 0;
}
