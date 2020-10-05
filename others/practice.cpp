#include <bits/stdc++.h>
using namespace std;

long long fact(int n){
     if(n == 0) return 1;
    return n * fact(n - 1);
}
int main()
{
    for (int i = 1; i <= 30; i++) {
        cout << i << " : " << fact(i) << "\n";
    }
    
    return 0;
}