#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        int n = nums.size();
        int cal;
        for (int i = 0; i < n - 1; i++)
        {
            cal = target - nums[i];
            for (int j = i + 1; j < n; j++)
            {
                if (cal == nums[j])
                {
                    return {i, j};
                }
            }
        }
        return {};
    }
};