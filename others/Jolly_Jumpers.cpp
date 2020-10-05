#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, t, al, p;
    vector<int> v, v2;
    bool isJolly;
    while (scanf("%d", &n) != EOF)
    {
        al = n;
        while (al--)
        {
            scanf("%d", &t);
            v.push_back(t);
        }
        isJolly = true;
        if (v.size() == 1)
            isJolly = true;
        else if (v.size() == 2 && abs(v[0] - v[1]) == 1)
            isJolly = true;
        else if (v.size() == 2 && abs(v[0] - v[1]) != 1)
            isJolly = false;
        else
        {
            p = abs(v[0] - v[1]);
            v2.push_back(p);
            for (int i = 2; i < v.size(); i++)
            {
                p = abs(v[i - 1] - v[i]);
                v2.push_back(p);
            }
            sort(v2.begin(), v2.end());
            p = 1;
            for (int i = 0; i < v2.size(); i++)
                if (v2[i] < n)
                {
                    if (v2[i] != p)
                    {
                        p++;
                        if (v2[i] != p)
                            isJolly = false;
                    }
                }
                else
                    isJolly = false;
        }
        if (isJolly)
            cout << "Jolly" << endl;
        else
            cout << "Not jolly" << endl;
        v.clear();
        v2.clear();
    }
    return 0;
}
