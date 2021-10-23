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

#define FileRead() freopen("../in.txt", "r", stdin)
#define FileWrite() freopen("../out.txt", "w", stdout)
#define PI 3.1415926535897932385
#define AllData(vector1) vector1.begin(), vector1.end()
#define INF 500000000
#define MAX 1000001

using namespace std;

vector<long long int> primes;
vector<bool> primeMark;

void segmentedSieve() {
    primeMark.resize(MAX, false);
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

vector<long long int> primesDp;

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

int main() {
//    FileRead();
//    FileWrite();

    segmentedSieve();
    primesDp.resize(MAX, -1);
    long long int n;

    while (true) {
        cin >> n;
        if (n == 0) {
            break;
        }

        cout << n << ":" << endl;
        sumOfPrime(n);
    }
    return 0;
}

