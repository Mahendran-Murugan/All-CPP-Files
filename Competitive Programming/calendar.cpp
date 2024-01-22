#include <iostream>

using namespace std;

int main()
{
    int year = 0, month = 0, noOfDays = 0, flag = 0;
    cin >> month >> year;
    int monthArr[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (year % 400 == 0 || year % 100 != 0 && year % 4 == 0)
    {
        flag = 1;
    }
    switch (month)
    {
    case 2:
        if (flag)
        {
            monthArr[month - 1] = 29;
        }
        break;
    default:
        break;
    }
    cout << monthArr[month - 1];
    return 0;
}