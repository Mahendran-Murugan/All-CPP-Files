#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int leastSoFor = INT_MAX;
        int maxProfit = INT_MIN;
        int profit = 0;
        for (int i = 0; i < prices.size(); i++)
        {
            if (leastSoFor > prices[i])
                leastSoFor = prices[i];
            profit = prices[i] - leastSoFor;
            maxProfit = max(profit, maxProfit);
        }
        return maxProfit;
    }
};