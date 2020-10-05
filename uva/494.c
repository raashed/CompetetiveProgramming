#include <stdio.h>
#include <string.h>

int main() {
    char word[10000];
    int count, length, i;
    while (gets(word)) {
        count = 0;
        length = (int) strlen(word);
        for (i = 0; i < length; i++)
            if ((word[i] >= 'a' && word[i] <= 'z') || (word[i] >= 'A' && word[i] <= 'Z'))
                if (!(word[i + 1] >= 'a' && word[i + 1] <= 'z') && !(word[i + 1] >= 'A' && word[i + 1] <= 'Z'))
                    count++;
        printf("%d\n", count);
    }
    return 0;
}
