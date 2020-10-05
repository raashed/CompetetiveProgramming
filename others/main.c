#include <stdio.h>
#include <string.h>

int main()
{
    char n[100];
    int l, i;
    while (gets(n))
    {
        l = (int) strlen(n);
        for (i = 0; i < l; ++i)
        {
            if (n[i] >= 'A' && n[i] <= 'C')
            {
                printf("2");
            } else if (n[i] >= 'D' && n[i] <= 'F')
            {
                printf("3");
            } else if (n[i] >= 'G' && n[i] <= 'I')
            {
                printf("4");
            } else if (n[i] >= 'J' && n[i] <= 'L')
            {
                printf("5");
            } else if (n[i] >= 'M' && n[i] <= 'O')
            {
                printf("6");
            } else if (n[i] >= 'P' && n[i] <= 'S')
            {
                printf("7");
            } else if (n[i] >= 'T' && n[i] <= 'V')
            {
                printf("8");
            } else if (n[i] >= 'W' && n[i] <= 'Z')
            {
                printf("9");
            } else
            {
                printf("%c", n[i]);
            }
        }
        printf("\n");
    }

    return 0;
}
