#include <bits/stdc++.h>

using namespace std;

int bigMod(int b, int p, int m) {
    if (p == 0) return 1;

    if (p & 1) return (b % m * bigMod(b, p - 1, m)) % m;
    else {
        int x = bigMod(b, p / 2, m);
        return (x * x) % m;
    }
}

int main() {
    freopen("/Volumes/HDD-2/Works/Practice/C-CPP/in.txt", "r", stdin);
    freopen("/Volumes/HDD-2/Works/Practice/C-CPP/out.txt", "w", stdout);

    int b, p, m;

    while (scanf("%d %d %d", &b, &p, &m) != EOF)
        printf("%d\n", bigMod(b, p, m));

    return 0;
}
