#include <stdio.h>
#include <string.h>

int main() {
    char number[1010];
    int length, r4, i, n, l;
    while (gets(number)) {
        length = (int) strlen(number), r4 = 0;
        if (length == 1 && number[0] - '0' == 0) break;

        for (i = 0; i < length; i++) {
            l = 1, n = length - i;
            while (n--) {
                l*=2;
            }
            r4 += ((number[i] - '0') * (l - 1));
        }
        printf("%d\n", r4);
    }
    return 0;
}
