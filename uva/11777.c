#include <stdio.h>

int myAverageFunction(int n1, int n2, int n3) {
    int i, j, a;
    if (n1 >= n2) {
        if (n1 >= n3) {
            i = n1;
        } else {
            i = n3;
        }
    } else {
        if (n2 >= n3) {
            i = n2;
        } else {
            i = n3;
        }
    }
    if (i == n1) {
        if (n2 >= n3) {
            j = n2;
        } else {
            j = n3;
        }
    } else if (i == n2) {
        if (n1 >= n3) {
            j = n1;
        } else {
            j = n3;
        }
    } else {
        if (n1 >= n2) {
            j = n1;
        } else {
            j = n2;
        }
    }
    a = i + j;
    a = a / 2;
    return a;
}

int main() {
    int t, t1, t2, f, a, c1, c2, c3, i, av, s;
    scanf("%d", &t);
    for (i = 1; i <= t; i++) {
        scanf("%d%d%d%d%d%d%d", &t1, &t2, &f, &a, &c1, &c2, &c3);
        av = myAverageFunction(c1, c2, c3);
        s = t1 + t2 + f + a + av;
        if (s >= 90) {
            printf("Case %d: A\n", i);
        } else if (s >= 80 && s < 90) {
            printf("Case %d: B\n", i);
        } else if (s >= 70 && s < 80) {
            printf("Case %d: C\n", i);
        } else if (s >= 60 && s < 70) {
            printf("Case %d: D\n", i);
        } else {
            printf("Case %d: F\n", i);
        }

    }
    return 0;
}
