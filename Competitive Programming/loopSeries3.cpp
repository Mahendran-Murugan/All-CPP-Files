#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int st1 = 10, st2 = 5, flag = 0;
    int n = 0;
    cin >> n;
    if (n % 2 != 0)
    {
        flag = 1;
    }
    for (int i = 1; i <= n / 2; i++)
    {
        cout << st1 << " " << st2 << " ";
        st1 += 50;
        st2 += 5;
    }
    if (flag)
    {
        cout << st1;
    }
    return 0;
}