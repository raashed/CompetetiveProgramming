#include <stdio.h>
#include <math.h>

int main()
{
    int i, j, length = 10000, myPrimeArray[length], root;
    for (i = 0; i < length; ++i)
    {
        myPrimeArray[i] = 1;
    }
    root=(int) sqrt(length*1.0);
    for (i = 0; i <= root; ++i)
    {
        if (myPrimeArray[i] == 1)
        {
            for (j = i*i; j < length; j += i)
            {
                if (myPrimeArray[j] == 1)
                {
                    myPrimeArray[j] = 0;
                }
            }
        }
    }
    for (i = 0; i < length; ++i)
    {
        printf("%d => %d\n", i, myPrimeArray[i]);
    }
    return 0;
}
