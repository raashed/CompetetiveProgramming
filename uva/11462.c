#include <stdio.h>

int main() {
    int n, a[2000000], i, t, j, f;
    while (scanf("%d", &n) && n != 0) {
        f = 1;
        for (i = 0; i < 2000000; i++) a[i] = 0;
        for (i = 0; i < n; i++) {
            scanf("%d", &t);
            a[t]++;
        }
        for (i = 0; i < 2000000; i++)
            if (a[i] > 0) {
                if (f == 1) f = 0;
                else printf(" ");
                for (j = 0; j < a[i]; j++) {
                    printf("%d", i);
                    if (j != a[i] - 1) printf(" ");
                }
            }
        printf("\n");
    }
    return 0;
}
