#include <stdio.h>

int main() {
    int testCase, i, a, b, c;
    scanf("%d", &testCase);

    for (i = 1; i <= testCase; i++) {
        scanf("%d%d%d", &a, &b, &c);
        if (a + b > c && a + c > b && b + c > a) {
            if (a == b && b == c && c == a) {
                printf("Case %d: Equilateral\n", i);
            } else if (a == b || b == c || c == a) {
                printf("Case %d: Isosceles\n", i);
            } else if (a + b > c || b + c > a || c + a > b) {
                printf("Case %d: Scalene\n", i);
            }
        } else {
            printf("Case %d: Invalid\n", i);
        }
    }
    return 0;
}
