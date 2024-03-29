class Solution
{
public:
    int balancedStringSplit(string s)
    {
        int left = 0;
        int right = 0;
        int ans = 0;
        for (auto i : s)
        {
            if (i == 'R')
            {
                right++;
            }
            else
            {
                left++;
            }
            if (right == left)
            {
                ans++;
            }
        }
        return ans;
    }
};