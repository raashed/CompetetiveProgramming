//
// Created by raashed on 3/30/20.
//
#include <bits/stdc++.h>

using namespace std;

// ****** START DEBUGGING ****** //

void __print(long x) { cerr << x; }

void __print(long long x) { cerr << x; }

void __print(unsigned x) { cerr << x; }

void __print(unsigned long x) { cerr << x; }

void __print(unsigned long long x) { cerr << x; }

void __print(float x) { cerr << x; }

void __print(double x) { cerr << x; }

void __print(long double x) { cerr << x; }

void __print(char x) { cerr << '\'' << x << '\''; }

void __print(const char *x) { cerr << '\"' << x << '\"'; }

void __print(const string &x) { cerr << '\"' << x << '\"'; }

void __print(bool x) { cerr << (x ? "true" : "false"); }

template<typename T, typename V>
void __print(const pair<T, V> &x) {
    cerr << '{';
    __print(x.first);
    cerr << ',';
    __print(x.second);
    cerr << '}';
}

template<typename T>
void __print(const T &x) {
    int f = 0;
    cerr << '{';
    for (auto &i: x) cerr << (f++ ? "," : ""), __print(i);
    cerr << "}";
}

void _print() { cerr << "]\n"; }

template<typename T, typename... V>
void _print(T t, V... v) {
    __print(t);
    if (sizeof...(v)) cerr << ", ";
    _print(v...);
}

#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif

#ifndef ONLINE_JUDGE
freopen("../in.txt", "r", stdin);
freopen("../out.txt", "w", stdout);
#endif
// ****** END DEBUGGING ****** //





#define sc(a) scanf("%d", &a)
#define scii(a, b) scanf("%d %d", &a, &b)
#define sciii(a, b, c) scanf("%d %d %d", &a, &b, &c)
#define scll(a) scanf("%lld", &a)
#define inf 1e7
#define min3(a, b, c) min(a, min(b, c))
#define mem(x, val) memset(x, val, sizeof(x))
#define READ        freopen("../in.txt", "r", stdin)
#define WRITE       freopen("../out.txt", "w", stdout)
#define FAST ios_base::sync_with_stdio(0);cout.tie(0)
#define sqr(x) ((x) * (x))
typedef long long ll;
typedef vector<int> vi;

vector<vector<int>> community;
vector<int> level;
vector<bool> visited;

void bfs(int s) {
    queue<int> q;
    q.push(s);
    level[s] = 0;
    visited[s] = true;
    while (!q.empty()) {
        int p = q.front();
        q.pop();
        for (int i = 0; i < community[p].size(); i++) {
            if (!visited[community[p][i]]) {
                level[community[p][i]] = level[p] + 1;
                q.push(community[p][i]);
                visited[community[p][i]] = true;
            }
        }
    }
}

void dfs(int s) {
    visited[s] = true;
    for (int i = 0; i < community[s].size(); i++) {
        if (!visited[community[s][i]]) {
            dfs(community[s][i]);
        }
    }
}

int main() {
    return 0;
}



//#include <bits/stdc++.h>
//
//using namespace std;
//
//#define READ            freopen("../in.txt", "r", stdin)
//#define WRITE           freopen("../out.txt", "w", stdout)
//#define watch1(x)       cout << #x << " " << (x) << endl
//#define watch2(x, y)    cout << #x << " " << (x) << ", " << #y << " " << (y) << endl
//


//#include <bits/stdc++.h>
//
//using namespace std;
//
//
//
//
//vector<int> vector1;
//
//int main() {
//    read;
//    int testCases;
//    cin >> testCases;
//    while (testCases--) {
//        int n;
//        cin >> n;
//
//        vector1.clear();
//        while (n--) {
//            int p;
//            cin >> p;
//
//            vector1.emplace_back(p);
//        }
//
//        sort(vector1.begin(), vector1.end());
//
//        int duplicate = vector1[0];
//        for (int i = 1; i < vector1.size(); i++) {
//            if (vector1[i-1] == vector1[i]) {
//                duplicate = vector1[i];
//                watch(vector1[i]);
//            }
//        }
//
//        watch(duplicate);
//    }
//    return 0;
//}

//
//
//bool isVectorHas(int p) {
//    for (int i : fullList) {
//        if (p == i) {
//            return true;
//        }
//    }
//    return false;
//}
//
//bool f(int p) {
//    for (int i : fullList) {
//        if (p == i) {
//            return true;
//        }
//    }
//    return false;
//}
//
//int main() {

//
//        int culpritNumber = -1;
//
//
//
//            if (culpritNumber == -1 && isVectorHas(p)) {
//                culpritNumber = p;
//            }
//
//        }
//
//        vector<int> vector1, vector2;
//        bool left = true, fistTime = true;
//        for (auto i : fullList) {
//            if (i == culpritNumber && fistTime) {
//                fistTime = false;
//            } else if (i == culpritNumber && !fistTime) {
//                left = false;
//            }
//            if (left) {
//                vector1.emplace_back(i);
//            } else {
//                vector2.emplace_back(i);
//            }
//        }
//
//        bool yes = false;
//        for (int i = 0; i < vector2.size(); i++) {
//            for (int j = i + 1; j < vector2.size(); j++) {
//                if (vector2[i] == vector2[j]) {
//                    yes = true;
//                }
//            }
//        }
//        if (vector1.size() == vector2.size() || yes) {
//            cout << 0 << endl;
//        } else if (vector1.size() > vector2.size()) {
//            vector<int> v2(fullList.begin() + vector2.size(), fullList.end());
//
//            sort(vector1.begin(), vector1.end());
//            sort(v2.begin(), v2.end());
//            bool isSame = true;
//            for (int i = 0; i < v2.size(); i++) {
//                if (vector1[i] == v2[i]) {
//
//                } else {
//                    isSame = false;
//                }
//            }
//            if (isSame) {
//                cout << 2 << endl;
//                cout << vector1.size() << " " << vector2.size() << endl;
//                cout << vector2.size() << " " << vector1.size() << endl;
//            } else {
//                cout << 1 << endl;
//                cout << vector1.size() << " " << vector2.size() << endl;
//            }
//        }
//    }
//    return 0;
//}
