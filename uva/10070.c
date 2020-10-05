#include <stdio.h>
#include <string.h>

int main() {
    char number[1010];
    int length, r4, r100, r400, r15, r55, i, k, l, first = 1;
    while (gets(number)) {
        length = (int) strlen(number);
        if (length == 1 && number[0] - '0' == 0) break;
        r4 = 0, r100 = 0, r400 = 0, r15 = 0, r55 = 0, k = 0, l = 0;
        for (i = 0; i < length; i++) {
            r4 = (r4 * 10 + number[i] - '0') % 4;
            r100 = (r100 * 10 + number[i] - '0') % 100;
            r400 = (r400 * 10 + number[i] - '0') % 400;
            r15 = (r15 * 10 + number[i] - '0') % 15;
            r55 = (r55 * 10 + number[i] - '0') % 55;
        }
        if (!first) printf("\n");
        else first = 0;
        if ((r4 == 0 && r100 != 0) || r400 == 0) {
            printf("This is leap year.\n");
            l = 1, k = 1;
        }
        if (r15 == 0) {
            k = 1;
            printf("This is huluculu festival year.\n");
        }

        if (r55 == 0 && l == 1) {
            k = 1;
            printf("This is bulukulu festival year.\n");
        }

        if (k != 1)
            printf("This is an ordinary year.\n");
    }
    return 0;
}
