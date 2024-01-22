class Solution
{
public:
    vector<vector<int>> generate(int n)
    {
        vector<vector<int>> ans(n);
        for (int i = 0; i < n; i++)
        {
            int val = 1;
            for (int k = 0; k <= i; k++)
            {
                ans[i].push_back(val);
                val = val * (i - k) / (k + 1);
            }
        }
        return ans;
    }
};