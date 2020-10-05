#include <stdio.h>

int main() {
    int current, destination, t1, t2;
    while (scanf("%d%d", &current, &destination) && current != -1 && destination != -1) {
        if (current > destination) {
            t1 = current - destination;
            t2 = (100 - current) + destination;
            if (t1 > t2) {
                printf("%d\n", t2);
            } else {
                printf("%d\n", t1);
            }
        } else {
            t1 = destination - current;
            t2 = (100 - destination) + current;
            if (t1 > t2) {
                printf("%d\n", t2);
            } else {
                printf("%d\n", t1);
            }
        }
    }
    return 0;
}