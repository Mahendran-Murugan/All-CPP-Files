#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> singleNumber(vector<int> &nums)
    {
        vector<int> ans;
        unordered_map<int, int> mpp;
        for (int i = 0; i < nums.size(); i++)
        {
            mpp[nums[i]]++;
        }
        for (auto iter : mpp)
        {
            if (iter.second == 1)
            {
                ans.push_back(iter.first);
            }
        }
        return ans;
    }
};