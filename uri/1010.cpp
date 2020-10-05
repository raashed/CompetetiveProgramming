#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x, y, xx, yy;
    double z, zz;
    cin >> x >> y >> z;
    cin >> xx >> yy >> zz;
    printf("VALOR A PAGAR: R$ %0.2lf\n", (y * z) + (yy * zz));

    return 0;
}
