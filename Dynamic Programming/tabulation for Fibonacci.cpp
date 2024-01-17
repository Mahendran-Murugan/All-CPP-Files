#include <bits/stdc++.h>
using namespace std;

int fibo(int num)
{
    int prev2 = 0, prev1 = 1, current = 0;
    if (num <= 1)
    {
        return num;
    }
    for (int i = 2; i <= num; i++)
    {
        current = prev1 + prev2;
        prev2 = prev1;
        prev1 = current;
    }
    return current;
}

int main()
{
    int num;
    cin >> num;
    cout << fibo(num);
    return 0;
}