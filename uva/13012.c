#include <stdio.h>

int main() {
    int count, testingNumber, number, i;

    while (scanf("%d", &testingNumber) != EOF) {
        count = 0;
        for (i = 0; i < 5; i++) {
            scanf("%d", &number);
            if (number == testingNumber) {
                count++;
            }
        }

        printf("%d\n", count);
    }

    return 0;
}
