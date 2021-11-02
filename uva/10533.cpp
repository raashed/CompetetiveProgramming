nclude <bits/stdc++.h>

#define FILE_IN()   freopen("../in.txt", "r", stdin)
#define FILE_OUT()  freopen("../out.txt", "w", stdout)
#define MAX 1000001

using namespace std;

vector<unsigned long long> primeMark;
vector<unsigned long long> primeMarkDp;

void segmentedSieve() {
    unsigned long long lim = sqrt(MAX);
    vector<unsigned long long> primes;
    vector<char> mark(lim + 1, false);
    for (unsigned long long i = 2; i <= lim; ++i) {
        if (!mark[i]) {
            primes.emplace_back(i);
            for (unsigned long long j = i * i; j <= lim; j += i) {
                mark[j] = true;
            }
        }
    }

    primeMark.resize(MAX, 1);
    primeMark[0] = false;
    primeMark[1] = false;
    for (unsigned long long i: primes) {
        for (unsigned long long j = max(i * i, (i - 1) / i * i); j <= MAX; j += i) {
            primeMark[j] = 0;
        }
    }
}

unsigned long long sumOfDigits(unsigned long long n) {
    unsigned long long m, sum = 0;
    while (n != 0) {
        m = n % 10;
        n = n / 10;
        sum = sum + m;
    }
    return sum;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

//    FILE_IN();
//    FILE_OUT();

    segmentedSieve();

    primeMarkDp.resize(MAX, 0);
    unsigned long long cnt = 0;
    for (unsigned long long i = 0; i < primeMark.size(); i++) {
        if (primeMark[i]) {
            unsigned long long x = sumOfDigits(i);
            if (primeMark[x]) {
                cnt++;
            }
        }
        primeMarkDp[i] = cnt;
    }

    unsigned long long tc;
    cin >> tc;

    while (tc--) {
        unsigned long long x, y;
        cin >> x >> y;

        cout << primeMarkDp[y] - primeMarkDp[x - 1] << endl;
    }
    return 0;
}

