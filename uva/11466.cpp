nclude <bits/stdc++.h>

#define FILE_READ() freopen("../in.txt", "r", stdin)
#define FILE_WRITE() freopen("../out.txt", "w", stdout)
#define PI 3.1415926535897932385
#define AllData(vector1) vector1.begin(), vector1.end()
#define INF 500000000
#define MAX 10000000

using namespace std;

int main() {
//    FILE_READ();
//    FILE_WRITE();

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long int n;
    while (true) {
        cin >> n;
        if (n == 0) {
            break;
        }

        long long int index = 2, maxDivisor = -1;
        while (n != 1) {

            while (n % index == 0) {
                n = n / index;

                maxDivisor = index;
                if (maxDivisor == 2) {
                    maxDivisor = -1;
                }
            }
            index++;
        }

        cout << maxDivisor << endl;
    }

    return 0;
}
