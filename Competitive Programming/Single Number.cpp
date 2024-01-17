#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        map<int, int> mpp;
        for (int i = 0; i < nums.size(); i++)
        {
            mpp[nums[i]]++;
        }
        for (auto iter : mpp)
        {
            if (iter.second == 1)
            {
                return iter.first;
            }
        }
        return -1;
    }
};