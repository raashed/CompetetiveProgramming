#include <stdio.h>

int main() {
    int h1, m1, h2, m2, s, e, r;
    while (scanf("%d%d%d%d", &h1, &m1, &h2, &m2)) {
        if (h1 == 0 && h2 == 0 && m1 == 0 && m2 == 0) {
            break;
        }
        s = (60*h1) + m1;
        e = (60*h2) + m2;
        if (e > s) {
            r = e - s;
        } else {
            s = 1440 - s;
            r = e + s;
        }

        printf("%d\n", r);
    }
    return 0;
}
