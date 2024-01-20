#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        string res = "";
        sort(strs.begin(), strs.end());
        int size = strs.size();
        string firstStr = strs[0], lastStr = strs[size - 1];
        int i = 0;
        while (i < min(firstStr.size(), lastStr.size()))
        {
            if (firstStr[i] != lastStr[i])
            {
                return res;
            }
            res += lastStr[i];
            i++;
        }
        return res;
    }
};