#include <iostream>
#include <vector>

using namespace std;

vector<vector<int> > friends;
vector<int> parent;
vector<int> countMax;
vector<bool> isVisited;

auto parentNumber(int n) -> int;

void dsu(int n);

void clearAll();

void assign(int node);

auto main() -> int {
    int testCase;
    cin >> testCase;

    while (testCase--) {
        int node, edge, i, a, b, ans;
        cin >> node >> edge;

        assign(node);

        for (i = 0; i < parent.size(); i++) parent[i] = i;

        while (edge--) {
            cin >> a >> b;
            friends[a].push_back(b);
            friends[b].push_back(a);
        }

        for (i = 0; i < friends.size(); i++) if (!isVisited[i]) dsu(i);

        for (i = 0; i < parent.size(); i++) countMax[parent[i]]++;

        ans = countMax[0];
        for (i = 0; i < countMax.size(); i++) ans = max(ans, countMax[i]);

        cout << ans << endl;
    }

    return 0;
}

void assign(int node) {
    clearAll();
    friends.resize(node + 1);
    parent.resize(node + 1);
    isVisited.assign(node + 1, false);
    countMax.assign(node + 1, 0);
}

void clearAll() {
    for (auto &i : friends) i.clear();
    friends.clear();
    parent.clear();
    isVisited.clear();
    countMax.clear();
}

void dsu(int n) {
    isVisited[n] = true;
    for (int i : friends[n])
        if (!isVisited[i]) {
            parent[i] = parentNumber(n);
            dsu(i);
        }
}

auto parentNumber(int n) -> int {
    return parent[n] == n ? n : parentNumber(parent[n]);
}
