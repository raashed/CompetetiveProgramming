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
    while (testCases--)
    {
        int l;
        cin >> l;

        vector<int> vector1;
        while (l--)
        {
            int x;
            cin >> x;

            vector1.emplace_back(x);
        }

        sort(vector1.begin(), vector1.end());

        int median = vector1[vector1.size() / 2];

        int ans = 0;
        for (int i : vector1)
        {
            ans += abs(median - i);
        }
        cout << ans << endl;
    }
    return 0;
}
