#include <stdio.h>

int main() {
    long long int prev, current, n, c, temp;

    while (scanf("%lld", &n) == 1) {
        if (n == 1) {
            printf("The Fibonacci number for %lld is %d\n", n, 0);
        } else if (n == 2) {
            printf("The Fibonacci number for %lld is %d\n", n, 1);
        } else {
            prev = 0, current = 1, c = 2;

            while (c <= n) {
                temp = prev;
                prev = current;
                current = temp + prev;
                c++;
            }

            printf("The Fibonacci number for %lld is %lld\n", n, current);
        }

    }

    return 0;
}
