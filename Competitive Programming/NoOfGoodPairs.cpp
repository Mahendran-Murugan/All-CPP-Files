class Solution
{
public:
    int numIdenticalPairs(vector<int> &nums)
    {
        unordered_map<int, int> mpp;
        int pairs = 0;
        for (auto i : nums)
        {
            mpp[i]++;
        }
        for (auto i : nums)
        {
            mpp[i]--;
            pairs += mpp[i];
        }
        return pairs;
    }
};