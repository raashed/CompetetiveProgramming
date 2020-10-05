#include <stdio.h>

int main() {
    int n, i, t, c = 0;
    while (scanf("%d", &n) != EOF) {
        c = 0;
        int a[n];
        for (i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        while (n--) {
            for (i = 0; i < n; i++) {
                if (a[i] > a[i + 1]) {
                    t = a[i];
                    a[i] = a[i + 1];
                    a[i + 1] = t;
                    c++;
                }
            }
        }
        printf("Minimum exchange operations : %d\n", c);
    }
    return 0;
}