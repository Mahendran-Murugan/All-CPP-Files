#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int reverse(int x)
    {
        int rev = 0, rem = 0;
        int flag = (x >= 0) ? 0 : 1;
        if (flag)
        {
            x = abs(x);
        }
        while (x > 0)
        {
            rem = x % 10;
            if (rev > (INT_MAX - rem) / 10)
            {
                return 0;
            }
            rev = rev * 10 + rem;
            x /= 10;
        }
        if (flag)
        {
            rev = -rev;
        }
        return rev;
    }
};