#include <stdio.h>

int main() {
    long int i, n, k, t, j, y = 0, l, a[1000000000];
    scanf("%ld%ld", &n, &k);
    for (i = 0; i < 1000000000; i++) {
        a[i] = 0;
    }
    for (i = 0; i < n; i++) {
        scanf("%ld", &t);
        a[t]++;
    }

    for (j = 0; j < k; j++) {
        for (i = 0; i < 1000000000; i++) {
            if (a[i] > 0) {
                printf("%ld\n", a[i]);
                for (l = 0; l < 1000000000; l++) {
                    a[l - a[i]] = a[l]--;
                    a[l] = 0;
                }
                y++;
            }
        }
    }
    return 0;
}

//    for (i = 0; i <= 1000000000; ++i) {
//        a[i] = 0;
//    }
//    int n, k, i, t, j, y, l, a[1000000000];
//    scanf("%d", &n);
//    scanf("%d", &k);
//    for (i = 0; i < 1000000000; i++) {
//
//    }
//    for (i = 0; i < n; i++) {
//        scanf("%ld", &t);
//        a[t]++;
//    }
//    y = 0;
//    for (i = 0; i < 1000000000; i++) {
//        if (a[i] > 0)
//            printf("%ld\n", a[i]);
//    }
//    for (j = 0; j < k; j++) {
//        for (i = 0; i < 1000000000; i++) {
//            if (a[i] > 0) {
//                printf("%ld\n", a[i]);
//                for (l = 0; l < 1000000000; l++) {
//                    a[l - a[i]] = a[l]--;
//                    a[l] = 0;
//                }
//                y++;
//            }
//        }
//    }
