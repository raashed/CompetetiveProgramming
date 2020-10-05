#include <stdio.h>

int main() {
    unsigned number1, number2, carry, x, y, z;
    while (scanf("%d%d", &number1, &number2) && number1 != 0 && number2 != 0) {
        carry = 0, z = 0;
        while (number1 > 0 || number2 > 0) {
            x = number1%10;
            y = number2%10;
            z = x + y + z;
            z = z/10;
            if (z > 0) carry += z;
            else z = 0;
            number1 = number1/10;
            number2 = number2/10;
        }
        if (carry == 0) printf("No carry operation.\n");
        else if (carry == 1) printf("%d carry operation.\n", carry);
        else printf("%d carry operations.\n", carry);
    }
    return 0;
}