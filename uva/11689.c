#include <stdio.h>

int main() {
    int testCase, i, e, f, c, s;
    scanf("%d", &testCase);
    for (i = 1; i <= testCase; ++i) {
        scanf("%d%d%d", &e, &f, &c);
        s = 0;
        e += f;
        while (e >= c) {
            s += e/c;
            e = e/c + e%c;
        }
        printf("%d\n", s);
    }
    return 0;
}
