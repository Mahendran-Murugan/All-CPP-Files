#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findPairs(vector<int> &nums, int k)
    {
        set<vector<int>> s;
        int i, j;
        int res = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                vector<int> sol;
                if (abs(nums[i] - nums[j]) == k)
                {
                    sol.push_back(nums[i]);
                    sol.push_back(nums[j]);
                    sort(sol.begin(), sol.end());
                    s.insert(sol);
                }
            }
        }
        return s.size();
    }
};