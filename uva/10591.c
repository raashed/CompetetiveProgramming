#include <stdio.h>

int a(int a) {
    int s = 0, t, t2;
    while (1) {
        t = a % 10;
        t2 = t * t;
        s = s + t2;
        if (a == 0) {
            break;
        }
        a = a / 10;
    }
    return s;
}

int main() {
    int n, t, array[10000], i, tc, j;
    scanf("%d", &tc);
    for (j = 1; j <= tc; j++) {
        for (i = 0; i <= 10000; i++) {
            array[i] = 0;
        }
        scanf("%d", &n);
        t = n;
        while (1) {
            t = a(t);
            if (array[t] == 1) {
                break;
            } else {
                array[t] = 1;
            }
        }
        if (t == 1) {
            printf("Case #%d: %d is a Happy number.\n", j, n);
        } else {
            printf("Case #%d: %d is a Unhappy number.\n", j, n);
        }
    }

    return 0;
}