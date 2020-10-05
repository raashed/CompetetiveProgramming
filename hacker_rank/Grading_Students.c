#include <stdio.h>

#define scan(n)         scanf("%d", &n);
#define print(n)        printf("%d\n", n);

void val(int *n) {
    if (*n > 37 && *n % 5 == 3) *n += 2;
    else if (*n > 37 && *n % 5 == 4) *n += 1;
}

int main() {
    int testCase;
    scan(testCase);
    while (testCase--) {
        int n;
        scan(n);
        val(&n);
        print(n);
    }
    return 0;
}
