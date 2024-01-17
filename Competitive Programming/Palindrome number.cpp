#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isPalindrome(int x)
    {
        long long temp = (long long)x;
        long long rem = 0, rev = 0;
        while (temp > 0)
        {
            rem = temp % 10;
            rev = rev * 10 + rem;
            temp /= 10;
        }
        if (x == rev)
            return true;
        else
            return false;
    }
};