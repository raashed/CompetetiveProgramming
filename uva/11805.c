#include <stdio.h>

int main() {
    int testCase, n, k, p, i, t;
    scanf("%d", &testCase);
    for (i = 1; i <= testCase; i++) {
        scanf("%d%d%d", &n, &k, &p);
        t = k + p;
        t = t%n;
        if (t == 0) {
            t = n;
        }
        printf("Case %d: %d\n", i, t);
    }
    return 0;
}