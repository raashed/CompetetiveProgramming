#include <iostream>
#include <map>

using namespace std;

auto main() -> int {
    int testCase;
    cin >> testCase;

    while (testCase--) {
        int payChar, cost, line, ans = 0;
        double a;
        char character;
        map<char, int> costTable;
        cin >> payChar;
        while (payChar--) {
            cin >> character >> cost;
            costTable[character] = cost;
        }

        cin >> line;
        string string1;
        getchar();
        ans = 0;
        while (line--) {
            getline(cin, string1);
            for (char i : string1) ans += costTable[i];
        }

        a = (ans * 1.0) / 100;
        printf("%.2f$\n", a);
    }

    return 0;
}
