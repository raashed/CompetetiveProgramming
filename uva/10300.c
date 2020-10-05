#include<stdio.h>

int main() {
    int testCase, testCase2, a, b, c, s;
    scanf("%d", &testCase);

    while (testCase--) {
        scanf("%d", &testCase2);

        s = 0;
        while (testCase2--) {
            scanf("%d%d%d", &a, &b, &c);

            s += (a * c);
        }

        printf("%d\n", s);
    }

    return 0;
}
