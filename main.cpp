#include <iostream>

using namespace std;

int main() {
    long long int testCases;
    cin >> testCases;
    while (testCases--) {
        long long int a, b, c, d, e;
        cin >> a >> b >> c >> d >> e;

        int india = 0, england = 0;
        if (a == 1) {
            india++;
        }
        if (b == 1) {
            india++;
        }
        if (c == 1) {
            india++;
        }
        if (d == 1) {
            india++;
        }
        if (e == 1) {
            india++;
        }
        if (a == 2) {
            england++;
        }
        if (b == 2) {
            england++;
        }
        if (c == 2) {
            england++;
        }
        if (d == 2) {
            england++;
        }
        if (e == 2) {
            england++;
        }

        if (india > england) {
            cout << "INDIA" << endl;
        } else if (england > india) {
            cout << "ENGLAND" << endl;
        } else {
            cout << "DRAW" << endl;
        }
    }
    return 0;
}


//#include<bits/stdc++.h>
//
//
//
//void fastIO() {
//    ios_base::sync_with_stdio(false);
//    cin.tie(nullptr);
//
////#ifndef ONLINE_JUDGE
////    freopen("../in.txt", "r", stdin);
////    freopen("../out.txt", "w", stdout);
////#endif
//}
//
//
//    fastIO();
//
//
//
//        int n;
//        cin >> n;
//        long long sumOfAll = 0;
//        int countOfPos = 0;
//        int countOfNeg = 0;
//        vector<int> groupOfNumbers;
//        while (n--) {
//            int temp;
//            cin >> temp;
//            if (temp > 0) {
//                sumOfAll += temp;
//                countOfPos++;
//                if (countOfNeg < 0) {
//                    groupOfNumbers.push_back(countOfNeg);
//                    countOfNeg = 0;
//                }
//            }
//            if (temp < 0) {
//                countOfNeg--;
//                if (countOfPos > 0) {
//                    groupOfNumbers.push_back(countOfPos);
//                    countOfPos = 0;
//                }
//            }
//        }
//        if (countOfNeg < 0) {
//            groupOfNumbers.push_back(countOfNeg);
//        }
//        if (countOfPos > 0) {
//            groupOfNumbers.push_back(countOfPos);
//        }
//        int middleValue = 0;
//        int middleIndex = 0;
//        for (int i = 0; i < groupOfNumbers.size(); i++) {
//            if (middleValue < groupOfNumbers[i]) {
//                middleValue = groupOfNumbers[i];
//                middleIndex = i;
//            }
//        }
//        int countAnswer = 0;
//        for (int i = middleIndex - 1; i >= 0; i--) {
//            if (groupOfNumbers[i] > 0) {
//                countAnswer++;
//            }
//        }
//        for (int i = middleIndex + 1; i < groupOfNumbers.size(); i++) {
//            if (groupOfNumbers[i] > 0) {
//                countAnswer++;
//            }
//        }
//        cout << "Case " << testCase++ << ": " << sumOfAll << " " << countAnswer << endl;
//    }
//}
