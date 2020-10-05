#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    static int score(string string1) {
        int sum = 0;
        int count = 0;
        int i = 0, length = string1.length();
        while (i < length) {
            if (string1[i] == 'O') {
                count++;
                sum = sum + count;
            } else {
                count = 0;
            }
            i++;
        }

        return sum;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int testCases;
    cin >> testCases;

    cin.ignore();

    while (testCases--) {
        string string1;
        getline(cin, string1);

        int answer = Solution::score(string1);

        cout << answer << endl;
    }

    return 0;
}
