class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
        long long totalProduct = 1, count = 0;
        bool flag = 0, flag2 = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 0)
            {
                flag = 1;
                count++;
                continue;
            }
            totalProduct *= nums[i];
            flag2 = 1;
        }
        for (int i = 0; i < nums.size(); i++)
        {
            if (flag)
            {
                if (nums[i] == 0 && flag2 && count <= 1)
                    nums[i] = totalProduct;
                else
                    nums[i] = 0;
            }
            else
            {
                nums[i] = (int)totalProduct / nums[i];
            }
        }
        return nums;
    }
};