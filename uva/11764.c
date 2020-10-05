#include <stdio.h>
#include <string.h>

int main() {
    int testCase, t, i, h, l, j;
    scanf("%d", &testCase);

    for (i = 1; i <= testCase; i++) {
        scanf("%d", &t);
        int a[t];
        for (j = 0; j < t; j++)
            scanf("%d", &a[j]);


        l = 0;
        h = 0;
        for (j = 0; j < t - 1; j++)
            if (a[j] > a[j + 1])
                l++;
            else if (a[j] < a[j + 1])
                h++;
        printf("Case %d: %d %d\n", i, h, l);
    }

    return 0;
}
