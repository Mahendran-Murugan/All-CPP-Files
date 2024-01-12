#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        vector<int> copy = nums1;
        int left = 0;
        int right = 0;
        nums1.clear();
        while (left < m && right < n)
        {
            if (copy[left] < nums2[right])
            {
                nums1.push_back(copy[left]);
                left++;
            }
            else
            {
                nums1.push_back(nums2[right]);
                right++;
            }
        }
        while (left < m)
        {
            nums1.push_back(copy[left]);
            left++;
        }
        while (right < n)
        {
            nums1.push_back(nums2[right]);
            right++;
        }
    }
};