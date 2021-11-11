#pragma clang diagnostic push
#pragma ide diagnostic ignored "OCUnusedGlobalDeclarationInspection"
#pragma ide diagnostic ignored "bugprone-reserved-identifier"

#include <bits/stdc++.h>

using namespace std;

void __print(int x) { cerr << x; }

void __print(long x) { cerr << x; }

void __print(long long x) { cerr << x; }

void __print(unsigned x) { cerr << x; }

void __print(unsigned long x) { cerr << x; }

void __print(unsigned long long x) { cerr << x; }

void __print(float x) { cerr << x; }

void __print(double x) { cerr << x; }

void __print(long double x) { cerr << x; }

void __print(char x) { cerr << '\'' << x << '\''; }

void __print(const char *x) { cerr << '\"' << x << '\"'; }

void __print(const string &x) { cerr << '\"' << x << '\"'; }

void __print(bool x) { cerr << (x ? "true" : "false"); }

template<typename T, typename V>
void __print(const pair<T, V> &x) {
    cerr << '{';
    __print(x.first);
    cerr << ',';
    __print(x.second);
    cerr << '}';
}

template<typename T>
void __print(const T &x) {
    int f = 0;
    cerr << '{';
    for (auto &i: x) cerr << (f++ ? "," : ""), __print(i);
    cerr << "}";
}

void _print() { cerr << "]\n"; }

template<typename T, typename... V>
void _print(T t, V... v) {
    __print(t);
    if (sizeof...(v)) cerr << ", ";
    _print(v...);
}

#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#define FILE_READ() freopen("../in.txt", "r", stdin)
#define FILE_WRITE() freopen("../out.txt", "w", stdout)
#else
#define debug(x...)
#define FILE_READ()
#define FILE_WRITE()
#endif

inline long long longSqrt(long long x) { return (long long) sqrt(double(x)); }

vector<bool> isPrimes;
vector<long long> primes;

void segmentedSieve() {
    long long lim = longSqrt(10000000);
    isPrimes.resize(10000000 + 1, true);
    isPrimes[0] = false;
    isPrimes[1] = false;
    for (long long i = 2; i <= lim; ++i)
        if (isPrimes[i])
            for (long long j = i * i; j <= lim; j += i)
                isPrimes[j] = false;

    for (long long i = 0; i < 10000001; ++i)
        if (isPrimes[i])
            primes.emplace_back(i);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

//    FILE_READ();
//    FILE_WRITE();

    segmentedSieve();

    long long n;
    while (true) {
        cin >> n;
        if (n == 0)
            break;

        n = abs(n);

        long long answer = -1;
        long long answerCount = 0;
        long long index = 0;

        while (true) {
            while (n % primes[index] == 0) {
                n = n / primes[index];
                if (answer != primes[index])
                    answerCount++;
                answer = primes[index];
            }

            index++;

            if (longSqrt(n) + 1 < primes[index])
                break;
        }

        if (n != 1) {
            answer = n;
            answerCount++;
        }

        if (answer == 2 || answerCount == 1)
            answer = -1;

        cout << answer << endl;
    }

    return 0;
}


