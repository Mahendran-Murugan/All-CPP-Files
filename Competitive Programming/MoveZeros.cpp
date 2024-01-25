class Solution
{
public:
    void moveZeroes(vector<int> &arr)
    {
        int nonZeroIndex = 0;
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] != 0)
            {
                arr[i] = arr[i] + arr[nonZeroIndex];
                arr[nonZeroIndex] = arr[i] - arr[nonZeroIndex];
                arr[i] = arr[i] - arr[nonZeroIndex];
                nonZeroIndex++;
            }
        }
    }
};