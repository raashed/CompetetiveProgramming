#include<bits/stdc++.h>

using namespace std;

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

//#ifndef ONLINE_JUDGE
//    freopen("../in.txt", "r", stdin);
//    freopen("../out.txt", "w", stdout);
//#endif
}

int main() {
    fastIO();
    int testCases, testCase = 1;
    cin >> testCases;
    while (testCases--) {
        int n;
        cin >> n;
        long long sumOfAll = 0;
        int countOfPos = 0;
        int countOfNeg = 0;
        vector<int> groupOfNumbers;
        while (n--) {
            int temp;
            cin >> temp;
            if (temp > 0) {
                sumOfAll += temp;
                countOfPos++;
                if (countOfNeg < 0) {
                    groupOfNumbers.push_back(countOfNeg);
                    countOfNeg = 0;
                }
            }
            if (temp < 0) {
                countOfNeg--;
                if (countOfPos > 0) {
                    groupOfNumbers.push_back(countOfPos);
                    countOfPos = 0;
                }
            }
        }
        if (countOfNeg < 0) {
            groupOfNumbers.push_back(countOfNeg);
        }
        if (countOfPos > 0) {
            groupOfNumbers.push_back(countOfPos);
        }
        int middleValue = 0;
        int middleIndex = 0;
        for (int i = 0; i < groupOfNumbers.size(); i++) {
            if (middleValue < groupOfNumbers[i]) {
                middleValue = groupOfNumbers[i];
                middleIndex = i;
            }
        }
        int countAnswer = 0;
        for (int i = middleIndex - 1; i >= 0; i--) {
            if (groupOfNumbers[i] > 0) {
                countAnswer++;
            }
        }
        for (int i = middleIndex + 1; i < groupOfNumbers.size(); i++) {
            if (groupOfNumbers[i] > 0) {
                countAnswer++;
            }
        }
        cout << "Case " << testCase++ << ": " << sumOfAll << " " << countAnswer << endl;
    }
}
