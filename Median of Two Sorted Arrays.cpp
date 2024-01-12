#include <bits/stdc++.h>

class Solution
{
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {
        set<int> s;
        int num1s = nums1.size();
        int num2s = nums2.size();
        vector<int> sol;
        int i = 0, j = 0;
        while (i < num1s && j < num2s)
        {
            if (nums1[i] < nums2[j])
            {
                sol.push_back(nums1[i]);
                i++;
            }
            else
            {
                sol.push_back(nums2[j]);
                j++;
            }
        }
        while (i < num1s)
        {
            sol.push_back(nums1[i]);
            i++;
        }
        while (j < num2s)
        {
            sol.push_back(nums2[j]);
            j++;
        }

        if ((num1s + num2s) % 2 == 0)
        {
            return (sol[(num1s + num2s) / 2 - 1] + sol[(num1s + num2s) / 2]) / 2.0;
        }
        else
        {
            return sol[(num1s + num2s) / 2];
        }
    }
};