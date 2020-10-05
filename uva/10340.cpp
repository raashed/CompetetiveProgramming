//
// Created by raashed on 3/30/20.
//

#include <bits/stdc++.h>

using namespace std;

int main()
{
//    freopen("/home/raashed/CLionProjects/Programming/in.txt", "r", stdin);
    string string1, string2;
    while (cin >> string1 >> string2)
    {
        int l = 0;
        for (char i : string2)
        {
            if (i == string1[l])
            {
                l++;
            }
        }
        if (l == string1.size())
        {
            cout << "Yes" << endl;
        } else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}
