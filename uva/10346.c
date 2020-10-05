#include <stdio.h>

int main() {
    int n, k, total, new;
    while (scanf("%d%d", &n, &k) != EOF) {
        total = n;
        while (n >= k) {
            new = n / k;
            total += new;
            n = (n % k) + new;
        }

        printf("%d\n", total);
    }
    return 0;
}
