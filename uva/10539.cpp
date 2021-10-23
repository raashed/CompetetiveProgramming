#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>

using namespace std;

vector<long long int> primes;
vector<bool> primeMark;
vector<long long int> primesPower;

void segmentedSieve() {
    long long int lim = 1000000;
    primeMark.resize(lim + 1, false);

    for (long long int i = 2; i <= lim; ++i) {
        if (!primeMark[i]) {
            primes.emplace_back(i);
            for (long long int j = i * i; j <= lim; j += i) {
                primeMark[j] = true;
            }
        }
    }
}

void readIO() {
    freopen("../in.txt", "r", stdin);
    freopen("../out.txt", "w", stdout);
}

int main() {
    segmentedSieve();

    for (long long prime : primes) {
        for (long long int j = prime * prime; j < 1000000000001; j *= prime) {
            primesPower.push_back(j);
        }
    }
    sort(primesPower.begin(), primesPower.end());

//    readIO();
    
    long long int tc, x, y, cnt;
    cin >> tc;

    while (tc--) {
        cin >> x >> y;
        cnt = 0;
        for (long long i : primesPower) {
            if (i >= x and i <= y) {
                cnt++;
            } else {
                if (cnt > 1) {
                    break;
                }
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
