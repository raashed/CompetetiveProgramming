#include <stdio.h>

int main() {
    int n, n2, c, i, m, f, start, end;
    long int j;
    while (scanf("%d%d", &n, &n2) && n != 0 && n2 != 0) {
        m = 0, f = 0;
        if (n2 > n) {
            start = n, end = n2;
        } else {
            start = n2, end = n;
        }
        for (i = start; i <= end; i++) {
            c = 0, j = i;
            do {
                if (j%2 == 0)j = j/2;
                else j = (3*j) + 1;
                c++;
            } while (j > 1);
            if (m < c) {
                f = i, m = c;
            }
        }
        printf("Between %d and %d, %d generates the longest sequence of %d values.\n", start, end, f, m);
    }

    return 0;
}
