#include <bits/stdc++.h>

using namespace std;

int modex(int b, int p, int m) {
    if (p == 0) return 1;

    if (p & 1) return (b % m * modex(b, p - 1, m)) % m;
    else {
        int x = modex(b, p / 2, m);
        return (x * x) % m;
    }
}

int main() {
//    freopen("/Volumes/HDD-2/Works/Practice/C-CPP/in.txt", "r", stdin);
//    freopen("/Volumes/HDD-2/Works/Practice/C-CPP/out.txt", "w", stdout);

    int b, p, m, c;
    while (true) {
        scanf("%d", &c);
        if (c == 0) break;
        while (c--) {
            scanf("%d %d %d", &b, &p, &m);
            printf("%d\n", modex(b, p, m));
        }
    }
    return 0;
}
