//
// Created by Mohammad Rashedul Islam on 31/3/20.
//

#include <bits/stdc++.h>

using namespace std;

#define READ    freopen("/Volumes/HDD-2/Works/Programming/in.txt", "r", stdin)
#define WRITE   freopen("/Volumes/HDD-2/Works/Programming/out.txt", "w", stdout)

bool comp(char a, char b) {
    if (tolower(a) == tolower(b)) {
        return a < b;
    }
    return tolower(a) < tolower(b);
}

int main() {
    //    READ, WRITE;
    int testCases;
    cin >> testCases;

    getchar();
    while (testCases--) {
        string string1;
        cin >> string1;

        sort(string1.begin(), string1.end(), comp);

        do {
            cout << string1 << endl;
        } while (next_permutation(string1.begin(), string1.end(), comp));
    }

    return 0;
}