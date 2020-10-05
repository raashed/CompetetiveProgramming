#include <stdio.h>

int main() {
    long int n, a[50], i;
    a[0] = 0, a[1] = 1, a[2] = 2;
    for (i = 3; i <= 50; i++) a[i] = a[i - 1] + a[i - 2];
    while (scanf("%ld", &n) && n != 0)
        printf("%ld\n", a[n]);
    return 0;
}
