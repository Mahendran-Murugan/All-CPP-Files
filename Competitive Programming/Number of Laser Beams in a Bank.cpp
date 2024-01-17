#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int numberOfBeams(vector<string> &bank)
    {
        int n = bank.size();
        int sum = 0, count = 0, previouscount = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < bank[i].length(); j++)
            {
                if (bank[i][j] == '1')
                {
                    count += 1;
                }
            }
            sum += count * previouscount;
            if (count > 0)
                previouscount = count;
            count = 0;
        }
        return sum;
    }
};