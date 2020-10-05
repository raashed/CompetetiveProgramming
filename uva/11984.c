#include <stdio.h>

int main() {
    int t, c, a, i;
    double f, r;
    scanf("%d", &t);
    for (i = 1; i <= t; i++) {
        scanf("%d%d", &c, &a);
        f = ((9 * c * 1.0) / 5) + 32 + a;
        r = ((f * 1.0 - 32) * 5) / 9;
        printf("Case %d: %.2f\n", i, r);
    }
    return 0;
}
