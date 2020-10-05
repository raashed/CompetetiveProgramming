#include <bits/stdc++.h>

using namespace std;

int val = 12;
int finish()
{
    return 0;
}

int main()
{
    double N[val][val];
    double sum = 0.0;
    int avg = 0;

    char O;
    cin >> O;

    for (int i = 0; i < val; i++)
    {
        for (int j = 0; j < val; j++)
        {
            cin >> N[i][j];

            if (i < j)
            {
                avg++;
                sum += N[i][j];
            }
        }
    }

    if (O == 'S')
        printf("%.1f\n", sum);
    else
        printf("%.1f\n", (sum/avg));

    finish();
}

