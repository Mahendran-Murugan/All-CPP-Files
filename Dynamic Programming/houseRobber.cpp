#include <bits/stdc++.h>

int calculteMaximum(vector<int> &nums, int n, vector<int> &dp)
{
    if (n == 0)
        return nums[n];
    if (n < 0)
        return 0;
    if (dp[n] != -1)
        return dp[n];
    int pickHouse = 0, dontPickHouse = 0;
    pickHouse = nums[n] + calculteMaximum(nums, n - 2, dp);
    dontPickHouse += calculteMaximum(nums, n - 1, dp);
    return dp[n] = max(pickHouse, dontPickHouse);
}

int maximumNonAdjacentSum(vector<int> &nums)
{
    int n = nums.size();
    vector<int> dp(n + 1, -1);
    return calculteMaximum(nums, n - 1, dp);
}