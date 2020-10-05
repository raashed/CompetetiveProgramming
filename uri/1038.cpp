#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b;
    double array1[5];
    array1[0] = 4.00;
    array1[1] = 4.50;
    array1[2] = 5.00;
    array1[3] = 2.00;
    array1[4] = 1.50;
    while (cin >> a >> b) {
        double answer = b * array1[a - 1];
        printf("Total: R$ %.2lf\n", answer);
    }

    return 0;
}
