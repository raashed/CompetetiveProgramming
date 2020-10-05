#include <bits/stdc++.h>

using namespace std;
#define MAX 1000000000+10

int arr[MAX];
vector<int> prime;

int main() {
    arr[0] = 1;
    for (int i = 2; i <= sqrt(MAX); i++) if (arr[i] == 0) for (int j = i * i; j < MAX; j += i) arr[j] = 1;
    for (int i = 0; i < MAX; i++) if (arr[i] == 0) prime.push_back(i);

    int c = 1, n;

    while (true) {
        cin >> n;
        if (n == 0) break;
        cout << "Case " << c++ << ": " << prime[n - 1] << endl;
    }

    return 0;
}