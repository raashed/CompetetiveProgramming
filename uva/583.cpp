#include <bitset>
#include <vector>
#include <iostream>

using namespace std;

typedef long long ll;
typedef vector<int> vi;

ll _seive_size;
bitset<10000010> bs;
vi primes;

void _seive(ll upperBound) {
    _seive_size = upperBound + 1;
    bs.set();
    bs[0] = bs[1] = false;
    for (ll i = 2; i <= _seive_size; i++)
        if (bs[i]) {
            for (ll j = i * i; j <= _seive_size; j += i)
                bs[j] = false;
            primes.push_back((int) i);
        }
}

vi primeFactors(ll N) {
    vi factors;
    ll PF_idx, PF;
    PF_idx = 0;
    PF = primes[PF_idx];
    while (N != 1 && (PF * PF <= N)) {
        while (N % PF == 0) {
            N /= PF;
            factors.push_back(PF);
        }
        PF = primes[++PF_idx];
    }
    if (N != 1)
        factors.push_back(N);
    return factors;
}

int main() {
    _seive(100000);

    int n;
    while (cin >> n, n != 0) {
        if (n == 0) {
            printf("0\n");
            continue;
        }

        vi result = primeFactors(abs(n));

        printf(n < 0 ? "%d = -1 x" : "%d =", n);
        for (int i = 0; i < result.size(); i++)
            printf(i == result.size() - 1 ? " %d" : " %d x", result[i]);
        printf("\n");
    }

    return 0;
}
