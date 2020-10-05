#include <stdio.h>
#include <math.h>

#define n 10000
int myArray[n];

int sieveOfEratosthenes() {
    int i, j;
    for (i = 0; i < n; i++) {
        myArray[i] = 1;
    }
    myArray[0] = 0;
    myArray[1] = 0;
    for (i = 2; i <= sqrt(n * 1.0); i++) {
        for (j = i * 2; j < n; j += i) {
            myArray[j] = 0;
        }
    }
    return 0;
}

int main() {
    sieveOfEratosthenes();
    int nn, i, j;
    scanf("%d", &nn);

    int myArray2[nn][nn];
    for (i = 0; i < nn; ++i) {
        for (j = 0; j < nn; ++j) {
            scanf("%d", &myArray2[i][j]);
        }
    }

    for (i = 0; i < nn; ++i) {
        for (j = 0; j < nn; ++j) {
            if (myArray[myArray2[i][j]]==1) {
                printf("Yes\t");
            } else {
                printf("No\t");
            }
        }
        printf("\n");
    }

    return 0;
}
