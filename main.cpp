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

int arr[100000 + 5], tree[100000 * 4 + 5];

void build(int n, int l, int r) {
    if (l == r) {
        tree[n] = arr[l];
        return;
    }

    int m = (l + r) / 2;
    build(n * 2, l, m);
    build(n * 2 + 1, m + 1, r);
    tree[n] = min(tree[n * 2], tree[n * 2 + 1]);
}

void update(int v, int tl, int tr, int pos, int new_val) {
    if (tl == tr) {
        tree[v] = new_val;
        return;
    }
    int tm = (tl + tr) / 2;
    if (pos <= tm) {
        update(v * 2, tl, tm, pos, new_val);
    } else {
        update(v * 2 + 1, tm + 1, tr, pos, new_val);
    }
    tree[v] = min(tree[v * 2], tree[v * 2 + 1]);
}

long long mini(int v, int tl, int tr, int l, int r) {
    if (l > r) {
        return 1000000000000000;
    }
    if (l == tl && r == tr) {
        return tree[v];
    }
    int tm = (tl + tr) / 2;
    return min(
            mini(v * 2, tl, tm, l, min(r, tm)),
            mini(v * 2 + 1, tm + 1, tr, max(l, tm + 1), r)
    );
}

int main() {
    fastIO();

    return 0;
}
