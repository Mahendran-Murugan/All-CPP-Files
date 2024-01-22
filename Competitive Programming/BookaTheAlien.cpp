#include <iostream>

using namespace std;

int main()
{
    int noOfDays = 0, years = 0, weeks = 0, days = 0;
    cin >> noOfDays;
    while (noOfDays > 0)
    {
        if (noOfDays >= 365)
        {
            years += 1;
            noOfDays -= 365;
        }
        else if (noOfDays >= 7)
        {
            weeks += 1;
            noOfDays -= 7;
        }
        else
        {
            days = noOfDays;
            noOfDays = 0;
        }
    }
    cout << years << " " << weeks << " " << days;
    return 0;
}