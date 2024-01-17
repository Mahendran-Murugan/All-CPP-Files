#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        int n = matrix.size(), m = 0;
        for (int i = 0; i < n; i++)
        {
            m = matrix[i].size();
            if (target <= matrix[i][m - 1])
            {
                for (int j = 0; j < m; j++)
                {
                    if (matrix[i][j] == target)
                    {
                        return true;
                    }
                }
            }
        }
        return false;
    }
};