#include <stdio.h>

int myRecursive(int n) {
    if (n > 100) {
        return n - 10;
    } else {
       myRecursive(myRecursive(n + 11));
    }
}

int main() {
    int n;
    while (scanf("%d", &n) && n != 0) {
        printf("f91(%d) = %d\n", n, myRecursive(n));
    }
    return 0;
}
