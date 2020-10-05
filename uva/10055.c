#include<stdio.h>
#include <stdlib.h>

int main() {
    int a, b, n;
    while (scanf("%d%d", &a, &b) != EOF)
        printf("%d\n", abs(a - b));
    return 0;
}
