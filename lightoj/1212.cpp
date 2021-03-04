//
// Created by rashe on 3/4/2021.
//

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <deque>

using namespace std;

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    FILE *stream;
    freopen_s(&stream, "../in.txt", "r", stdin);
//    freopen_s(&stream, "../out.txt", "w", stdout);
#endif
}

int main() {
    fastIO();
    int tc;
    cin >> tc;
    for (int i = 0; i < tc; i++) {
        int n, k;
        cin >> n >> k;
        deque<int> arr;

        cout << "Case " << i + 1 << ":" << endl;

        for (int j = 0; j < k; j++) {
            string command;
            int value;
            cin >> command;

            if (command == "pushLeft") {
                cin >> value;
                if (arr.size() == n) {
                    cout << "The queue is full" << endl;
                } else {
                    arr.push_front(value);
                    cout << "Pushed in left: " << value << endl;
                }
            }
            if (command == "pushRight") {
                cin >> value;
                if (arr.size() == n) {
                    cout << "The queue is full" << endl;
                } else {
                    arr.push_back(value);
                    cout << "Pushed in right: " << value << endl;
                }
            }
            if (command == "popLeft") {
                if (arr.empty()) {
                    cout << "The queue is empty" << endl;
                } else {
                    value = arr.front();
                    arr.pop_front();
                    cout << "Popped from left: " << value << endl;
                }
            }
            if (command == "popRight") {
                if (arr.empty()) {
                    cout << "The queue is empty" << endl;
                } else {
                    value = arr.back();
                    arr.pop_back();
                    cout << "Popped from right: " << value << endl;
                }
            }
        }
    }

    return 0;
}
