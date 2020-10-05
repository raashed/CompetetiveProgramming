#include<bits/stdc++.h>

using namespace std;

bool isLeapYear(long long int year)
{
    return (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
}

int main()
{
    char month1[10], month2[10];
    int date1, date2;
    long long int year1, year2, maxValue, minValue, countYear;
    int testCase;
    cin >> testCase;
    for (int tc = 1; tc <= testCase; tc++)
    {
        countYear = 0;
        scanf("%s %d, %lld", month1, &date1, &year1);
        scanf("%s %d, %lld", month2, &date2, &year2);
        if (strcmp(month1, "January") != 0 || strcmp(month1, "February") != 0)
            year1++;
        if (strcmp(month2, "January") == 0)
            year2--;
        else if (strcmp(month2, "February") == 0 && date2 < 29)
            year2--;
        maxValue = max(year1, year2);
        minValue = min(year1, year2);
        for (; minValue <= maxValue; minValue++)
            if (isLeapYear(minValue))
                countYear++;
        cout << "Case " << tc << ": " << countYear << endl;
    }


    return 0;
}
