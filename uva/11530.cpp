#include <bits/stdc++.h>

using namespace std;

int main()
{
//    freopen("/home/raashed/CLionProjects/cpp/in", "r", stdin);
    int testCase;
    cin >> testCase;
    getchar();
    for (int test = 1; test <= testCase; test++)
    {
        string s;
        getline(cin, s);
        int ans = 0;
        for (char i : s)
        {
            if (i == 'a' || i == 'd' || i == 'g' || i == 'j' || i == 'm' || i == 'p' || i == 't' || i == 'w' ||
                i == ' ')
            {
                ans += 1;
            } else if (i == 'b' || i == 'e' || i == 'h' || i == 'k' || i == 'n' || i == 'q' || i == 'u' || i == 'x')
            {
                ans += 2;
            } else if (i == 'c' || i == 'f' || i == 'i' || i == 'l' || i == 'o' || i == 'r' || i == 'v' || i == 'y')
            {
                ans += 3;
            } else if (i == 's' || i == 'z')
            {
                ans += 4;
            }
        }
        cout << "Case #" << test << ": " << ans << endl;
    }
    return 0;
}
