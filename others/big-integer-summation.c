#include <stdio.h>
#include <string.h>

#define numberLength 100000
#define answerLength 200000

int main() {
    int number1Length, number2Length, answer[answerLength], answerLengthCount = 0, i, n1 = 0, n2 = 0, d = 0;
    char number1[numberLength], number2[numberLength];
    scanf("%s", number1);
    scanf("%s", number2);
    number1Length = (int) strlen(number1);
    number2Length = (int) strlen(number2);
    while (number1Length > 0 || number2Length > 0) {
        n1 = 0, n2 = 0;
        if (number1[number1Length - 1] != '\0') {
            n1 = (int) number1[number1Length - 1] - 48;
        }
        if (number2[number2Length - 1] != '\0') {
            n2 = (int) number2[number2Length - 1] - 48;
        }
        if ((n1 + n2 + d) > 9) {
            answer[answerLengthCount++] = (n1 + n2 + d) % 10;
            d = (n1 + n2 + d) / 10;
        } else {
            answer[answerLengthCount++] = n1 + n2 + d;
        }
        number1Length--;
        number2Length--;
    }
    if (d > 0) {
        answer[answerLengthCount++] = d;
    }
    for (i = answerLengthCount - 1; i >= 0; i--) {
        printf("%d", answer[i]);
    }
    printf("\n");
    return 0;
}
