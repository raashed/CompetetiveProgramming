#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <map>
#include <sstream>
#include <stack>

using namespace std;

void readIO() {
    freopen("../in.txt", "r", stdin);
    freopen("../out.txt", "w", stdout);
}

string multiply(string nums1, string nums2) {
    unsigned long n = nums1.size();
    unsigned long m = nums2.size();
    string ans(n + m, '0');
    for (int i = n - 1; i >= 0; i--) {
        for (int j = m - 1; j >= 0; j--) {
            int p = (nums1[i] - '0') * (nums2[j] - '0') + (ans[i + j + 1] - '0');
            ans[i + j + 1] = p % 10 + '0';
            ans[i + j] += p / 10;
        }
    }
    for (int i = 0; i < m + n; i++) {
        if (ans[i] != '0') {
            return ans.substr(i);
        }
    }
    return "0";

}

int main() {
//    readIO();
    string string1, string2;

    while (getline(cin, string1)) {
        getline(cin, string2);

        string answer = multiply(string1, string2);
        cout << answer << endl;

        string1.clear();
        string2.clear();
    }
    return 0;
}

