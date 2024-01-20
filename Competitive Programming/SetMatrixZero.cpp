#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void setZeroes(vector<vector<int>> &matrix)
    {
        int n = matrix.size();
        int m = matrix[0].size();

        unordered_set<int> zeroRows;
        unordered_set<int> zeroCols;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (matrix[i][j] == 0)
                {
                    zeroRows.insert(i);
                    zeroCols.insert(j);
                }
            }
        }

        for (int i : zeroRows)
        {
            for (int j = 0; j < m; j++)
            {
                matrix[i][j] = 0;
            }
        }

        for (int j : zeroCols)
        {
            for (int i = 0; i < n; i++)
            {
                matrix[i][j] = 0;
            }
        }
    }
};