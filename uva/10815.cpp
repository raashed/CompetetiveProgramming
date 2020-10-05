#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    static string dictionary(string string1) {
        transform(string1.begin(), string1.end(), string1.begin(), ::tolower);
        return string1;
    }

    static set<string> replaceUnknown(const string &string1) {
        set<string> set1;
        string string2;
        for (char i : string1) {
            if (i >= 'a' && i <= 'z') {
                string2.push_back(i);
            } else  {
                if (!string2.empty()) {
                    set1.insert(string2);
                }
                string2 = "";
            }
        }

        if (!string2.empty()) {
            set1.insert(string2);
        }
        return set1;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string string1;
    set<string> dictionary;
    while (getline(cin, string1)) {
        string1 = Solution::dictionary(string1);
        stringstream ss(string1);
        string word;

        while (ss >> word) {
            set<string> s = Solution::replaceUnknown(word);
            for (const string &string2 : s) {
                dictionary.insert(string2);
            }
        }
    }

    copy(dictionary.begin(), dictionary.end(), ostream_iterator<string>(cout, "\n"));

    return 0;
}
