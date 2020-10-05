#include <stdio.h>
#include <string.h>

int main()
{
    char word[1000];
    int lengthOfWord, i, j, k;
    while (gets(word))
    {
        lengthOfWord = (int) strlen(word);
        k = -1;
        for (i = 0; i < lengthOfWord; i++)
        {
            if (word[i] == ' ')
            {
                for (j = i - 1; j > k; j--)
                {
                    printf("%c", word[j]);
                }
                printf(" ");
                k = i;
            }
        }
        for (j = i - 1; j > k; j--)
        {
            printf("%c", word[j]);
        }
        printf("\n");
    }
    return 0;
}
