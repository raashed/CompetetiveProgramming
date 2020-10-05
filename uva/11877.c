#include <stdio.h>

int main() {
    int n, total, new;
    while (scanf("%d", &n) && n != 0) {
        total = 0;
        new = 0;
        if (n == 2) {
            n++;
        }
        while (n >= 3) {
            new = n / 3;
            total += new;
            n = (n % 3) + new;
            if (n == 2) {
                n++;
            }
        }
        printf("%d\n", total);
    }
    return 0;
}
