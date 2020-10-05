#include <bits/stdc++.h>

using namespace std;

int main() {
    int inputNumber;
    while (cin >> inputNumber && inputNumber != 0) {
        int firstDimension = inputNumber;
        int firstDimension2 = inputNumber;
        int secondDimension = inputNumber;
        int secondDimension2 = inputNumber;
        int array[firstDimension][secondDimension];
        int i, k = 0, l = 0;
        while (secondDimension > k && l < firstDimension) {
            for (i = l; i < firstDimension; ++i)
                array[k][i] = 1 + k;
            k++;
            for (i = k; i < secondDimension; ++i)
                array[i][firstDimension - 1] = 1 + l;
            firstDimension--;
            if (k < secondDimension)
                for (i = firstDimension - 1; i >= l; --i)
                    array[secondDimension - 1][i] = 1 + l;
            if (k < secondDimension)
                secondDimension--;
            if (l < firstDimension)
                for (i = secondDimension - 1; i >= k; --i)
                    array[i][l] = 1 + l;
            if (l < firstDimension)
                l++;
        }
        for (int firstDimensionIndex = 0; firstDimensionIndex < firstDimension2; firstDimensionIndex++) {
            for (int secondDimensionIndex = 0; secondDimensionIndex < secondDimension2; secondDimensionIndex++) {
                if (secondDimensionIndex == 0)
                    printf("%3d", array[firstDimensionIndex][secondDimensionIndex]);
                else
                    printf(" %3d", array[firstDimensionIndex][secondDimensionIndex]);
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}
