#include <bits/stdc++.h>

using namespace std;

int main() {
    int inputNumber;
    int inputArrayLength = 0;

    int inputArray[inputArrayLength];
    while (true)
    {
        cin >> inputNumber;
        if (inputNumber == 0)
            break;
        else {
            inputArray[inputArrayLength] = inputNumber;
            inputArrayLength++;
        }
    }

    for (int ab = 0; ab < inputArrayLength; ab++)
    {
        int number2 = inputArray[ab];
        int aaa = inputArray[ab];
        int array[inputArray[ab]][number2];
        for (int a = 0; a < inputArray[ab]; a++)
            for (int b = 0; b < inputArray[ab]; b++)
                array[a][b] = 1;

        int i, k = 0, l = 0;
        while (inputArray[ab] > k && l < number2) {
            for (i = l; i < inputArray[ab]; ++i)
                array[k][i] = array[k][i] + k;
            k++;
            for (i = k; i < inputArray[ab]; ++i)
                array[i][inputArray[ab] - 1] = array[i][inputArray[ab] - 1] + l;
            inputArray[ab]--;
            if (k < inputArray[ab]) {
                for (i = inputArray[ab] - 1; i >= l; --i)
                    array[number2 - 1][i] = array[number2 - 1][i] + l;
                number2--;
            }
            if (l < number2) {
                for (i = number2 - 1; i >= k; --i)
                    array[i][l] = array[i][l] + l;
                l++;
            }
        }

        for (int a = 0; a < aaa; a++) {
            for (int b = 0; b < aaa; b++)
                cout << array[a][b] << "   ";
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}
