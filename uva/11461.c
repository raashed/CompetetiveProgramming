#include <stdio.h>
#include <math.h>

int main() {
    int a, b, i, c, t;
    while (1) {
        scanf("%d%d", &a, &b);
        if (a == 0 && b == 0) break;
        c = 0;
        for (i = a; i <= b; i++) {
            t = sqrt(i);
            if (i == t*t) {
                c++;
            }
        }

        printf("%d\n", c);
    }

     return 0;
}
