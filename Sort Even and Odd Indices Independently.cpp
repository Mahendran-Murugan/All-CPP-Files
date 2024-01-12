#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> sortEvenOdd(vector<int> &nums)
    {
        vector<int> oddArray, evenArray, resArray;
        for (int i = 0; i < nums.size(); i++)
        {
            if (i % 2 == 0)
            {
                evenArray.push_back(nums[i]);
            }
            else
            {
                oddArray.push_back(nums[i]);
            }
        }
        sort(oddArray.begin(), oddArray.end(), greater<int>());
        sort(evenArray.begin(), evenArray.end());
        int eve = 0, odd = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (i % 2 == 0)
            {
                resArray.push_back(evenArray[eve]);
                eve++;
            }
            else
            {
                resArray.push_back(oddArray[odd]);
                odd++;
            }
        }
        return resArray;
    }
};