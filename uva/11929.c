#include <stdio.h>
#include <string.h>

int main() {
    char number[1010];
    int length, r, i;
    while (gets(number)) {
        length = (int) strlen(number);
        if (length == 1 && number[0] - '0' == 0) break;
        length = (int) strlen(number), r = 0;
        for (i = 0; i < length; i++)
            r = (r * 10 + number[i] - '0') % 11;
        printf(r != 0 ? "%s is not a multiple of 11.\n" : "%s is a multiple of 11.\n", number);
    }
    return 0;
}
