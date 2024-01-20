#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int threeSumClosest(vector<int> &nums, int target)
    {
        sort(nums.begin(), nums.end());
        int closestSum = INT_MAX;
        int minDiff = INT_MAX;
        for (int i = 0; i < nums.size(); i++)
        {
            int left = i + 1;
            int right = nums.size() - 1;
            while (left < right)
            {
                int sum = nums[left] + nums[right] + nums[i];
                int currentDiff = abs(target - sum);

                if (currentDiff < minDiff)
                {
                    minDiff = currentDiff;
                    closestSum = sum;
                }

                if (sum < target)
                {
                    left++;
                }

                else
                {
                    right--;
                }
            }
        }
        return closestSum;
    }
};