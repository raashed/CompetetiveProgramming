#include <iostream>
#include <vector>
#include <queue>

using namespace std;

bool isBiColor(int node) {
    vector<vector<int>> grid(node);
    vector<char> color(node, 'w');

    int edge;
    cin >> edge;

    while (edge--) {
        int a, b;
        cin >> a >> b;

        grid[a].push_back(b);
        grid[b].push_back(a);
    }
    bool ans = true;

    queue<int> myQueue;
    myQueue.push(0);
    color[0] = 'r';

    while (!myQueue.empty() && ans) {
        int currentRow = myQueue.front();
        myQueue.pop();
        for (int i = 0; i < grid[currentRow].size(); i++) {
            int currentColor = grid[currentRow][i];
            if (color[currentColor] == 'w') {
                myQueue.push(currentColor);
                color[currentColor] = color[currentRow] == 'r' ? 'b' : 'r';
            } else if (color[currentColor] == color[currentRow]) {
                ans = false;
                break;
            }
        }
    }
    return ans;
}

int main() {
    int node;
    while (scanf("%d", &node) && node != 0) {
        cout << (isBiColor(node) ? "BICOLORABLE." : "NOT BICOLORABLE.") << endl;
    }
    return 0;
}
