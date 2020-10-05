#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int testCase;
    cin >> testCase;
    
    for (int i = 0; i < testCase; i++)
    {
        double player;
        cin >> player;
        int res = 0;
        
        double ans = player / 2;
        for (int j = 0; j < player; j++)
        {
            int age;
            cin >> age;
            if (j == (ceil(ans) - 1))
            {
                res = age;
            }
        }
        
        cout << "Case " << i + 1 << ": " << res << "" << endl;
    }
    
    return 0;
}
