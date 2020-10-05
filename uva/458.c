#include <stdio.h>

int main() {
    char string[1000000];
    int i;

    while (gets(string)) {
        for (i = 0; string[i]; i++)
            putchar(string[i] - 7);
        puts("");
    }
    return 0;
}