#include<bits/stdc++.h>

using namespace std;

int main()
{
    int testCase;
    cin >> testCase;
    for (int tc = 1; tc <= testCase; tc++)
    {
        long long int n;
        cin >> n;
        int smallN = (int) sqrt(n * 1.0), bigN = (int) sqrt(n * 1.0) + 1;
        if (n == 1)
        {
            cout << "Case " << tc << ": " << 1 << " " << 1 << endl;
        } else if (n == 2)
        {
            cout << "Case " << tc << ": " << 1 << " " << 2 << endl;
        } else if (n == 3)
        {
            cout << "Case " << tc << ": " << 2 << " " << 2 << endl;
        } else if (n == 4)
        {
            cout << "Case " << tc << ": " << 2 << " " << 1 << endl;
        } else
        {
            int column = bigN;
            if (bigN * bigN - bigN < n)
            {
                for (; column <= bigN; column++)
                {
                    if (bigN * bigN - column + 1 == n)
                    {
                        break;
                    }
                }
            }
            int row = smallN + 1;
            if (bigN * bigN - bigN >= n)
            {
                for (row = 1; row <= smallN; row++)
                {
                    if (smallN * smallN + row == n)
                    {
                        break;
                    }
                }
            }
            cout << "Case " << tc << ": " << column << " " << row << endl;
        }
    }
    return 0;
}
