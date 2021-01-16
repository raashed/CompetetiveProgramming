//
// Created by raashed on 1/16/21.
//

#include <bits/stdc++.h>

using namespace std;

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("../in.txt", "r", stdin);
    freopen("../out.txt", "w", stdout);
#endif
}

bool ruleFirst(const string &s) {
    bool res = true;
    for (char i : s) {
        if (!isupper(i)) {
            res = false;
        }
    }
    return res;
}

bool ruleSecond(string s) {
    bool res = true;
    for (int i = 0; i < s.size(); i++) {
        if (i == 0) {
            if (!islower(s[i])) {
                res = false;
            }
        } else {
            if (!isupper(s[i])) {
                res = false;
            }
        }
    }
    return res;
}

string resultFirst(string s) {
    for (int i = 0; i < s.size(); i++) {
        s[i] = tolower(s[i]);
    }
    return s;
}

string resultSecond(string s) {
    for (int i = 0; i < s.size(); i++) {
        if (i == 0) {
            s[i] = toupper(s[i]);
        } else {
            s[i] = tolower(s[i]);
        }
    }
    return s;
}

int main() {
    fastIO();

    string s;
    cin >> s;

    bool rule1 = ruleFirst(s);
    bool rule2 = ruleSecond(s);
    bool rule3;
    if (s.size() == 1 && tolower(s[0])) {
        rule3 = true;
    } else {
        rule3 = false;
    }

    if (rule1) {
        s = resultFirst(s);
    } else if (rule2) {
        s = resultSecond(s);
    } else if (rule3) {
        s[0] = toupper(s[0]);
    }

    cout << s << endl;

    return 0;
}
