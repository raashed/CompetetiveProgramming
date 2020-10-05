#include <stdio.h>
#include <stdbool.h>

int main() {
    int n, currentSum = 0, lastSum = 0, i, j;
    scanf("%d", &n);
    bool result = true;

    int myArray[n][n];
    for (i = 0; i < n; ++i) {
        for (j = 0; j < n; ++j) {
            scanf("%d", &myArray[i][j]);
        }
    }

    for (i = 0; i < n; ++i) {
        for (j = 0; j < n; ++j) {
            printf("%d\t", myArray[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < n; ++i) {
        currentSum = 0;
        for (j = 0; j < n; ++j) {
            currentSum += myArray[i][j];
        }
        if (i != 0 && currentSum != lastSum) {
            result = false;
        }
        lastSum = currentSum;
    }

    if (result) {
        for (i = 0; i < n; ++i) {
            currentSum = 0;
            for (j = 0; j < n; ++j) {
                currentSum += myArray[j][i];
            }
            if (currentSum != lastSum) {
                result = false;
            }
            lastSum = currentSum;
        }
    }

    if (result) {
        currentSum = 0;
        for (j = 0; j < n; ++j) {
            currentSum += myArray[j][j];
        }
        if (currentSum != lastSum) {
            result = false;
        }
    }

    if (result) {
        currentSum = 0;
        for (j = n - 1; j >= 0; j--) {
            currentSum += myArray[j][j];
        }
        if (currentSum != lastSum) {
            result = false;
        }
    }

    fputs(result ? "true" : "false", stdout);

    return 0;
}
