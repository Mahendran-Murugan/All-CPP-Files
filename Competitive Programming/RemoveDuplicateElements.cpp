class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        set<int> s;
        for (int i = 0; i < nums.size(); i++)
        {
            s.insert(nums[i]);
        }
        auto it = s.begin();
        for (int i = 0; i < s.size(); i++)
        {
            nums[i] = *it;
            it++;
        }
        return s.size();
    }
};