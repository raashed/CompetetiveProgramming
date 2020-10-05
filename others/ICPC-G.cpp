#include <bits/stdc++.h>

using namespace std;

int main() {
    freopen("/Volumes/HDD-2/Works/Practice/C-CPP/in.txt", "r", stdin);
    freopen("/Volumes/HDD-2/Works/Practice/C-CPP/out.txt", "w", stdout);
    int tc;
    cin >> tc;
    while (tc--) {
        int n, p;
        cin >> n >> p;

        map<int, int>map;

        int lcm = 0;
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= i; j++)
                map[__gcd(i, j)]++;

        for(auto i: map)
            cout<<map[i].fisrt<<" "<<map[i].second<<endl;

    }
    return 0;
}