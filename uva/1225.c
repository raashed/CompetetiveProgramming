#include <stdio.h>
#include <string.h>

int main() {
    int t, n, i, j, a[10];
    scanf("%d", &t);
    while (t--) {
        for (i = 0; i < 10; i++)
            a[i] = 0;
        scanf("%d", &n);
        for (i = 1; i <= n; i++) {
            j = i;
            while (j > 0) {
                a[j%10]++;
                j = j/10;
            }
        }
        for (j = 0; j < 10; j++)
            if (j == 9)
                printf("%d", a[j]);
            else
                printf("%d ", a[j]);
        printf("\n");
    }
    return 0;
}
