#include <stdio.h>

long int myFunction(long int n) {
    long int t, s = 0;
    while (1) {
        if (n==0) {
            break;
        }
        t = n%10;
        s = s+t;

        n = n/10;
    }
    return s;
}
int main() {
    long int n;
    while (1) {
        scanf("%ld", &n);
        if (n==0) {
            break;
        }

        while (1) {
            n = myFunction(n);
            if (n/10==0) {
                break;
            }
        }

        printf("%ld\n", n);
    }

    return 0;
}