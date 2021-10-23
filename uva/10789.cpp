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
#define MAX 1000001

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

int main() {
//    FILE_READ();
//    FILE_WRITE();

    segmentedSieve();

    long long int tc, tcCnt = 1;
    cin >> tc;

    cin.ignore();
    while (tc--) {
        string string1;
        getline(cin, string1);
        map<char, int> frequents;
        for (char &i: string1) {
            frequents[i]++;
        }

        string string2;
        for (auto frequent: frequents) {
            if (!primeMark[frequent.second]) {
                string2.push_back(frequent.first);
            }
        }

        cout << "Case " << tcCnt++ << ": ";
        if (string2.empty()) {
            cout << "empty";
        } else {
            cout << string2;
        }
//        if (tc) {
            cout << endl;
//        }
    }
    return 0;
}

