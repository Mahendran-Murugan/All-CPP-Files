#include <bits/stdc++.h>
int countDistinctWays(int nStairs)
{
    int prev1 = 1, prev2 = 1, current = 0;
    for (int i = 2; i <= nStairs; i++)
    {
        current = (prev1 + prev2) % 1000000007;
        prev2 = prev1;
        prev1 = current;
    }
    return prev1;
}