#include <bits/stdc++.h>
using namespace std;
void recursion(vector<int> v, int l)
{
    if (v.size() / 2 < l)
        return;

    cout << v[l] << " " << v[v.size()-1 - l] << endl;
    return recursion(v, ++l);
}
int main()
{
    freopen("in.txt", "r", stdin);
    int n, i, t;
    vector<int> v;
    cin >> n;
    i = n;
    while (i--)
    {
        cin >> t;
        v.push_back(t);
    }

    recursion(v, 0);
    return 0;
}