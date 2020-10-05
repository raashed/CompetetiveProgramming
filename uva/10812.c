#include <stdio.h>

int main() {
    int testCase;
    long int a, b, x, y;
    scanf("%d", &testCase);
    while (testCase--) {
        scanf("%ld%ld", &a, &b);
        if (a >= b) {
            x = a + b;
            y = a - b;
            if (x%2 == 0 && y%2 == 0) {
                printf("%ld %ld\n", x/2, y/2);
            } else {
                printf("impossible\n");
            }
        } else {
            printf("impossible\n");
        }

    }
    return 0;
}