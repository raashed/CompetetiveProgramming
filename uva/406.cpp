#include <bits/stdc++.h>

using namespace std;

void myFunction();

int myPrime[200], myPrimeLength = 0;

int main() {
    myFunction();

    int number, number2;

    while(scanf("%d%d", &number, &number2) != EOF) {
        cout << number << " " << number2 << ":";
        int myFinalPrimeLength = 0, myFinalPrime[168];
        for (int i = 0; myPrime[i] <= number && i < myPrimeLength; i++)
            myFinalPrime[myFinalPrimeLength++] = myPrime[i];
        if (myFinalPrimeLength % 2 == 0)
            number2 = number2 * 2;
        else
            number2 = (number2 * 2) - 1;
        if (number2 > myFinalPrimeLength)
            number2 = myFinalPrimeLength;
        int start = (myFinalPrimeLength / 2) - (number2 / 2);
        int end = start + number2;
        for (int i = start; i < end; i++)
            cout << " " << myFinalPrime[i];
        cout << endl;
        cout << endl;
    }

    return 0;
}

void myFunction() {
    int allInt[1001];
    for (int i = 1; i < 1001; i++)
        allInt[i] = 1;

    myPrime[myPrimeLength++] = 1;
    for (int i = 2; i < 1001; i++) {
        if (allInt[i] == 1) {
            myPrime[myPrimeLength++] = i;
            for (int j = 2; j * i < 1001; j++)
                allInt[j * i] = 0;
        }
    }
}
