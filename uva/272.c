#include <stdio.h>
#include <string.h>

int main() {
    char string[1000000];
    int i, isFirstDone = 0;

    while (gets(string)) {
        for (i = 0; string[i]; i++) {
            if (string[i] == '\"') {
                if (isFirstDone == 0) {
                    printf("``");
                    isFirstDone = 1;
                } else {
                    printf("''");
                    isFirstDone = 0;
                }
            } else
                putchar(string[i]);
        }
        puts("");
    }
    return 0;
}