#include <bits/stdc++.h>
using namespace std;

void printReverse(vector<int> a, int l)
{
    if (l == 0)
        return;

    cout << a[--l] << " ";
    return printReverse(a, l);
}
int main()
{
    freopen("in.txt", "r", stdin);
    int n, i, j;
    vector<int> v;

    cin >> n;
    i = n;
    while (i--)
    {
        cin >> j;
        v.push_back(j);
    }

    printReverse(v, n);

    return 0;
}