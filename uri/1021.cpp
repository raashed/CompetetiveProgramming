#include <bits/stdc++.h>

using namespace std;

int main() {
    double taka;
    while (cin >> taka) {
        int modAnswer = (taka * 100);
        int answer = 0;
        cout << "NOTAS:" << endl;
        answer = modAnswer / 10000;
        cout << answer << " nota(s) de R$ 100.00" << endl;
        answer = (modAnswer % 10000) / 5000;
        cout << answer << " nota(s) de R$ 50.00" << endl;
        answer = ((modAnswer % 10000) % 5000) / 2000;
        cout << answer << " nota(s) de R$ 20.00" << endl;
        answer = (((modAnswer % 10000) % 5000) % 2000) / 1000;
        cout << answer << " nota(s) de R$ 10.00" << endl;
        answer = ((((modAnswer % 10000) % 5000) % 2000) % 1000) / 500;
        cout << answer << " nota(s) de R$ 5.00" << endl;
        answer = (((((modAnswer % 10000) % 5000) % 2000) % 1000) % 500) / 200;
        cout << answer << " nota(s) de R$ 2.00" << endl;
        cout << "MOEDAS:" << endl;
        answer = ((((((modAnswer % 10000) % 5000) % 2000) % 1000) % 500) % 200) / 100;
        cout << answer << " moeda(s) de R$ 1.00" << endl;
        answer = (((((((modAnswer % 10000) % 5000) % 2000) % 1000) % 500) % 200) % 100) / 50;
        cout << answer << " moeda(s) de R$ 0.50" << endl;
        answer = ((((((((modAnswer % 10000) % 5000) % 2000) % 1000) % 500) % 200) % 100) % 50) / 25;
        cout << answer << " moeda(s) de R$ 0.25" << endl;
        answer = (((((((((modAnswer % 10000) % 5000) % 2000) % 1000) % 500) % 200) % 100) % 50) % 25) / 10;
        cout << answer << " moeda(s) de R$ 0.10" << endl;
        answer = ((((((((((modAnswer % 10000) % 5000) % 2000) % 1000) % 500) % 200) % 100) % 50) % 25) % 10) / 5;
        cout << answer << " moeda(s) de R$ 0.05" << endl;
        answer = (((((((((((modAnswer % 10000) % 5000) % 2000) % 1000) % 500) % 200) % 100) % 50) % 25) % 10) % 5) / 1;
        cout << answer << " moeda(s) de R$ 0.01" << endl;
    }

    return 0;
}
