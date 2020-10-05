#include <bits/stdc++.h>

using namespace std;

int main() {
    double x1, x2;
    double y1, y2;
    cin >> x1 >> y1;
    cin >> x2 >> y2;
    double p1 = (x2 - x1) * (x2 - x1);
    double p2 = (y2 - y1) * (y2 - y1);
    double p3 = p1 + p2;
    printf("%0.4lf\n", sqrt(p3));

    return 0;
}
