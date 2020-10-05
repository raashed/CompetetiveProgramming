//
// Created by raashed on 3/30/20.
//

#include <bits/stdc++.h>

using namespace std;

#define READ    freopen("/home/raashed/CLionProjects/Programming/in.txt", "r", stdin)
#define WRITE   freopen("/home/raashed/CLionProjects/Programming/out.txt", "w", stdout)

bool isPalindrome(const string &string1)
{
    string reverseString = string1;
    reverse(reverseString.begin(), reverseString.end());
    return string1 == reverseString;
}

bool isMirror(const string &string1)
{
    int ans = 0;
    for (int i = 0; i < string1.size(); i++)
    {
        if ((string1[i] == 'A' && string1[string1.size() - i - 1] == 'A') ||
            (string1[i] == 'E' && string1[string1.size() - i - 1] == '3') ||
            (string1[i] == 'H' && string1[string1.size() - i - 1] == 'H') ||
            (string1[i] == 'I' && string1[string1.size() - i - 1] == 'J') ||
            (string1[i] == 'J' && string1[string1.size() - i - 1] == 'L') ||
            (string1[i] == 'L' && string1[string1.size() - i - 1] == 'J') ||
            (string1[i] == 'M' && string1[string1.size() - i - 1] == 'M') ||
            (string1[i] == 'O' && string1[string1.size() - i - 1] == 'O') ||
            (string1[i] == 'S' && string1[string1.size() - i - 1] == '2') ||
            (string1[i] == 'T' && string1[string1.size() - i - 1] == 'T') ||
            (string1[i] == 'U' && string1[string1.size() - i - 1] == 'U') ||
            (string1[i] == 'V' && string1[string1.size() - i - 1] == 'V') ||
            (string1[i] == 'W' && string1[string1.size() - i - 1] == 'W') ||
            (string1[i] == 'X' && string1[string1.size() - i - 1] == 'X') ||
            (string1[i] == 'Y' && string1[string1.size() - i - 1] == 'Y') ||
            (string1[i] == 'Z' && string1[string1.size() - i - 1] == '5') ||
            (string1[i] == '1' && string1[string1.size() - i - 1] == '1') ||
            (string1[i] == '2' && string1[string1.size() - i - 1] == 'S') ||
            (string1[i] == '3' && string1[string1.size() - i - 1] == 'E') ||
            (string1[i] == '5' && string1[string1.size() - i - 1] == 'Z') ||
            (string1[i] == '8' && string1[string1.size() - i - 1] == '8'))
        {
            ans++;
        }
    }
    return ans == string1.size();
}

int main()
{
//    READ;
//    WRITE;
    string string1;

    while (cin >> string1)
    {
        bool palindrome, mirror;
        palindrome = isPalindrome(string1);
        mirror = isMirror(string1);

        if (palindrome)
        {
            if (mirror)
            {
                cout << string1 << " -- is a mirrored palindrome." << endl;
            } else
            {
                cout << string1 << " -- is a regular palindrome." << endl;
            }
        } else
        {
            if (mirror)
            {
                cout << string1 << " -- is a mirrored string." << endl;
            } else
            {
                cout << string1 << " -- is not a palindrome." << endl;
            }
        }
        cout << endl;
    }

    return 0;
}
