#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    double myPow(double x, int n)
    {
        double ans = 1.0;
        long long num = n;
        if (num < 0)
            num = -1 * num;
        while (num)
        {
            if (num % 2)
            {
                ans = ans * x;
                num -= 1;
            }
            else
            {
                x = x * x;
                num /= 2;
            }
        }
        if (n < 0)
            ans = 1.0 / ans;
        return ans;
    }
};