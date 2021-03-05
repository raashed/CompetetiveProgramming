//
// Created by rashe on 3/5/2021.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    FILE *stream;
    freopen_s(&stream, "../in.txt", "r", stdin);
    freopen_s(&stream, "../out.txt", "w", stdout);
#endif
}

int main() {
    fastIO();
    int tc;
    cin >> tc;
    for (int i = 1; i <= tc; i++) {
        vector<string> vector1(105);
        int currentPosition = 0, lastInserted = 0;
        vector1[currentPosition] = "http://www.lightoj.com/";
        cout << "Case " << i << ":" << endl;
        while (true) {
            string string1, string2;
            cin >> string1;
            if (string1 == "QUIT") {
                break;
            }
            if (string1 == "VISIT") {
                currentPosition++;
                lastInserted = currentPosition;
                cin >> string2;
                cout << string2 << endl;
                vector1[currentPosition] = string2;
            }
            if (string1 == "BACK") {
                currentPosition--;
                if (currentPosition < 0) {
                    currentPosition = 0;
                    cout << "Ignored" << endl;
                } else {
                    cout << vector1[currentPosition] << endl;
                }
            }
            if (string1 == "FORWARD") {
                currentPosition++;
                if (currentPosition > lastInserted) {
                    cout << "Ignored" << endl;
                    currentPosition = lastInserted;
                } else {
                    cout << vector1[currentPosition] << endl;
                }
            }
            cin.ignore();
        }
    }
    return 0;
}
