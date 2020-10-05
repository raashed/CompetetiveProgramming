#include <bits/stdc++.h>

using namespace std;

long long int modex(int b, int p, long long unsigned m) {
    if (p == 0) return 1;

    if (p & 1) return (b % m * modex(b, p - 1, m)) % m;
    else {
        long long int x = modex(b, p / 2, m);
        return (x * x) % m;
    }
}

int main() {
    freopen("/Volumes/HDD-2/Works/Practice/C-CPP/in.txt", "r", stdin);
    freopen("/Volumes/HDD-2/Works/Practice/C-CPP/out.txt", "w", stdout);

    int b, p, c;

    scanf("%d", &c);
    while (c--) {
        scanf("%d %d", &b, &p);
        printf("%lld\n", modex(b, p, 9223372036854775807));
    }

    return 0;
}
