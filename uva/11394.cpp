#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>
#include <map>
#include <sstream>
#include <stack>
#include <cmath>
#include <cctype>
#include <cstring>
#include <string>

#define FILE_READ() freopen("../in.txt", "r", stdin)
#define FILE_WRITE() freopen("../out.txt", "w", stdout)
#define PI 3.1415926535897932385
#define AllData(vector1) vector1.begin(), vector1.end()
#define INF 500000000
#define MAX 20000001
//#define MAX 100

using namespace std;

vector<long long int> primes;
vector<bool> primeMark;

void segmentedSieve() {
    primeMark.resize(MAX, false);
    primeMark[0] = true;
    primeMark[1] = true;
    for (long long int i = 2; i <= MAX; ++i) {
        if (!primeMark[i]) {
            primes.emplace_back(i);
            for (long long int j = i * i; j <= MAX; j += i) {
                primeMark[j] = true;
            }
        }
    }
}

long long int largeDivisor(long long int n) {
    long long int answer = -1;
    long long int answerCount = 0;
    for (long long prime: primes) {
        if (prime > n || prime == n) {
            break;
        }

        if (n % prime == 0) {
            answerCount++;
            answer = prime;
        }
    }

    if (answerCount <= 1) {
        answer = -1;
    }

    return answer;
}

void sumOfPrime(long long int n) {
    long long int answer1 = -1;
    long long int answer2 = -1;
    for (long long prime: primes) {
        if (prime > n) {
            break;
        }

        long long int key = n - prime;
        if (!primeMark[key] && key != 0) {
            answer1 = prime;
            answer2 = key;
            break;
        }
    }

    if (answer1 != -1 && answer2 != -1) {
        cout << answer1 << "+" << answer2 << endl;
    } else {
        cout << "NO WAY!" << endl;
    }
}

long long int sumOfDigits(long long int n) {
    long long int m, sum = 0;
    while (n > 0) {
        m = n % 10;
        sum = sum + m;
        n = n / 10;
    }
    return sum;
}

int main() {
//    FILE_READ();
//    FILE_WRITE();

    segmentedSieve();

    vector<pair<int, int>> twinPrimes;
    for (int i = 0; i < primes.size() - 1; i++) {
        if ((primes[i] + 2) == primes[i + 1]) {
            twinPrimes.emplace_back(primes[i], primes[i + 1]);
        }
    }

    int n;
    while (scanf("%d", &n) == 1) {
        printf("(%d, %d)\n", twinPrimes[n - 1].first, twinPrimes[n - 1].second);
    }

    return 0;
}

