#include <bits/stdc++.h>
#include <boost/algorithm/string.hpp>

using namespace std;

int main() {
    int testCase, a, b, c, d;
    vector<string> v;
    string full;
    char t;
    scanf("%d", &testCase);
    for (int i = 1; i <= testCase; i++) {
        scanf("%d.%d.%d.%d", &a, &b, &c, &d);

        getline (cin, full);

        boost::split(v, full, boost::is_any_of("."));

        if (v[0].compare(bitset<8>(a).to_string()) && v[1].compare(bitset<8>(b).to_string()) &&
            v[2].compare(bitset<8>(c).to_string()) && v[3].compare(bitset<8>(d).to_string()))
            cout << "Case " << i << ": Yes" << endl;
        else
            cout << "Case " << i << ": No" << endl;
    }

    return 0;
}