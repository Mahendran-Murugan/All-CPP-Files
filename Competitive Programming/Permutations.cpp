#include <vector>
using namespace std;

class Solution
{
public:
    void recursion(vector<int> &nums, vector<vector<int>> &ans, vector<int> &element, int hash[])
    {
        if (element.size() == nums.size())
        {
            ans.push_back(element);
            return;
        }
        for (int i = 0; i < nums.size(); i++)
        {
            if (!hash[i])
            {
                element.push_back(nums[i]);
                hash[i] = 1;
                recursion(nums, ans, element, hash);
                hash[i] = 0;
                element.pop_back();
            }
        }
    }

    vector<vector<int>> permute(vector<int> &nums)
    {
        vector<vector<int>> ans;
        vector<int> element;
        int n = nums.size();
        int hash[n];
        for (int i = 0; i < n; i++)
            hash[i] = 0;
        recursion(nums, ans, element, hash);
        return ans;
    }
};