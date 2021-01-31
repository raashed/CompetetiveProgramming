//
// Created by raashed on 1/31/21.
//

#include <bits/stdc++.h>

using namespace std;

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("../in.txt", "r", stdin);
    freopen("../out.txt", "w", stdout);
#endif
}

int main() {
    fastIO();
    int n, q, t, tc = 0;
    while (cin >> n >> q && n != 0 && q != 0) {
        vector<int> arr(n);
        vector<int> dp(10000 + 5, 0);
        for (int i = 0; i < n; i++) cin >> arr[i];
        sort(arr.begin(), arr.end());
        printf("CASE# %d:\n", ++tc);
        for (int i = 0; i < q; i++) {
            cin >> t;
            if (dp[t] == -1) {
                printf("%d not found\n", t);
            } else if (dp[t] != 0) {
                printf("%d found at %d\n", t, dp[t]);
            } else if (binary_search(arr.begin(), arr.end(), t)) {
                auto ind = lower_bound(arr.begin(), arr.end(), t);
                int index = ind - arr.begin();
                dp[t] = index + 1;
                printf("%d found at %d\n", t, dp[t]);
            } else {
                dp[t] = -1;
                printf("%d not found\n", t);
            }
        }
    }
    return 0;
}