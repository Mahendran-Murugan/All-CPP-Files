class Solution
{
public:
    int hammingWeight(uint32_t n)
    {
        int ans = 0;
        while (n)
        {
            ans = ans + (1 & n);
            n >>= 1;
        }
        return ans;
    }
};