#include <bits/stdc++.h>

using namespace std;

int main() {
    int edge, a, b, caseNo = 1;
    while (true) {
        cin >> edge;
        if (edge == 0) break;
        map<int, vector<int>> connections;
        while (edge--) {
            cin >> a >> b;
            connections[a].emplace_back(b);
            connections[b].emplace_back(a);
        }
        while (true) {
            cin >> a >> b;
            if (a == 0 && b == 0) break;
            queue<int> myQueue;
            map<int, int> isVisited;
            int ans = 0;
            myQueue.emplace(a);
            isVisited[a] = 0;
            while (!myQueue.empty()) {
                int u = myQueue.front();
                myQueue.pop();
                for (int j = 0; j < connections[u].size(); j++) {
                    if (isVisited[connections[u][j]] == 0 && connections[u][j] != a) {
                        myQueue.emplace(connections[u][j]);
                        isVisited[connections[u][j]] = isVisited[u] + 1;
                        if (isVisited[connections[u][j]] > b) {
                            ans++;
                        }
                    }
                }
            }
            for (auto &connection : connections) {
                if (isVisited[connection.first] == 0 && connection.first != a) {
                    ans++;
                }
            }
            printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n", caseNo++, ans, a, b);
        }
    }
    return 0;
}
