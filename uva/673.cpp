//
// Created by raashed on 3/30/20.
//

#include <bits/stdc++.h>

using namespace std;

int main()
{
//    freopen("/home/raashed/CLionProjects/Programming/in.txt", "r", stdin);
    int testCases;
    cin >> testCases;

    string s;
    getchar();
    while (testCases--)
    {
        getline(cin, s);
        stack<char> t;
        for (char i : s)
        {
            if ((i == ')' && !t.empty() && t.top() == '(') || (i == ']' && !t.empty() && t.top() == '['))
            {
                t.pop();
            } else
            {
                t.push(i);
            }
        }

        if (t.empty())
        {
            cout << "Yes" << endl;
        } else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}
