//
// Created by raashed on 3/30/20.
//

#include <bits/stdc++.h>

using namespace std;

int main()
{
//    freopen("/home/raashed/CLionProjects/Programming/in.txt", "r", stdin);
//    freopen("/home/raashed/CLionProjects/Programming/out.txt", "w", stdout);
    int testCases;
    cin >> testCases;
    while (testCases--)
    {
        int a, b;
        cin >> a >> b;
        while (b--)
        {
            for (int i = 1; i <= a; i++)
            {
                for (int j = 1; j <= i; j++)
                {
                    cout << i;
                }
                cout << endl;
            }
            for (int i = a - 1; i >= 1; i--)
            {
                for (int j = 1; j <= i; j++)
                {
                    cout << i;
                }
                cout << endl;
            }
            if (b)
            {
                cout << endl;
            }
        }
        if (testCases)
        {
            cout << endl;
        }
    }
    return 0;
}
