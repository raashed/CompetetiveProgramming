#include <bits/stdc++.h>

using namespace std;

int main()
{
    float A, B, C;
    cin >> A;
    cin >> B;
    cin >> C;
    printf("TRIANGULO: %0.3lf\n", ((A * C) / 2));
    printf("CIRCULO: %0.3lf\n", (3.14159 * C * C));
    printf("TRAPEZIO: %0.3lf\n", (((A + B) / 2) * C));
    printf("QUADRADO: %0.3lf\n", (B * B));
    printf("RETANGULO: %0.3lf\n", (A * B));

    return 0;
}
