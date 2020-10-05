#include <bits/stdc++.h>

using namespace std;

int main() {
    double a, b, c;
    while (cin >> a >> b >> c) {
        double intAnswer = sqrt((b * b) - (4 * a * c));
        double beforeAnswerPos = -b + intAnswer;
        double beforeAnswerNeg = -b - intAnswer;
        double answerPos = beforeAnswerPos / (2 * a);
        double answerNeg = beforeAnswerNeg / (2 * a);
        if (answerPos == (double) answerPos) {
            printf("R1 = %.5lf\n", answerPos);
            printf("R2 = %.5lf\n", answerNeg);
        } else {
            cout << "Impossivel calcular" << endl;
        }
    }

    return 0;
}
