#include <bits/stdc++.h>

using namespace std;

/* declare functions */
int add(int, int);

int substance(int, int);

int multipy(int, int);

double division(double, double);

/*
 * main function
 * start
 */
int main() {
    // variables
    int a, b, c, d, e;
    double f;

    /*  valud assigned */
    a = 10;
    b = 20;

    // calling functions
    c = add(a, b);
    cout << c << "\n";
    d = substance(a, b);
    cout << d << "\n";
    e = multipy(a, b);
    cout << e << "\n";
    f = division(a, b);
    cout << f << "\n";


    return 0;
}

// other functions
int add(int x, int y) {
    int a;
    a = x + y;
    return a;
}

int substance(int x, int y) {
    int a;
    a = x - y;
    return a;
}

int multipy(int x, int y) {
    int a;
    a = x * y;
    return a;
}

double division(double x, double z) {
    double a;
    a = x / z;
    return a;
}
