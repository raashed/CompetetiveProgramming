#include<stdio.h>

int main() {
    int n, i, sum, average, a[60], t, c, tc = 1;

    while (1) {
        scanf("%d", &n);
        if (n == 0)
            break;

        sum = 0, c = 0;

        for (i = 0; i < n; ++i) {
            scanf("%d", &t);
            a[i] = t;
            sum += t;
        }

        average = sum / n;

        for (i = 0; i < n; ++i)
            if (a[i] > average)
                c += (a[i] - average);

        printf("Set #%d\nThe minimum number of moves is %d.\n\n", tc++, c);
    }

    return 0;
}
