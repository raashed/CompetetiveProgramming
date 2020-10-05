#include <stdio.h>

long long int reverse(long long int n) {
    long long int r, n2 = 0;
    while (n > 0) {
        r = n % 10;
        n2 = n2 * 10 + r;
        n /= 10;
    }
    return n2;
}

int main() {
    long long int testCase, number, n, t;
    scanf("%lld", &testCase);
    while (testCase--) {
        scanf("%lld", &number);
        n = 0;

        t = reverse(number);
        number += t;
        n++;

        while (1) {
            t = reverse(number);
            if (number == t) break;
            number += t;
            n++;
        }

        printf("%lld %lld\n", n, number);
    }
    return 0;
}