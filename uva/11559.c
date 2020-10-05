#include <stdio.h>

int main() {
    int p, b, h, w, i, sp, j, ws, r;
    while (scanf("%d%d%d%d", &p, &b, &h, &w) != EOF) {
        r = b + 1;
        for (i = 0; i < h; i++) {
            scanf("%d", &sp);
            for (j = 0; j < w; j++) {
                scanf("%d", &ws);
                if (ws >= p) {
                    if (r > sp * p) {
                        r = sp * p;
                    }
                }
            }
        }
        if (r > b) {
            printf("stay home\n");
        } else {
            printf("%d\n", r);
        }
    }

    return 0;
}
