#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {
        vector<string> temp = strs;
        map<string, vector<string>> mpp;
        int n = strs.size();
        for (int i = 0; i < n; i++)
        {
            sort(temp[i].begin(), temp[i].end());
            mpp[temp[i]].push_back(strs[i]);
        }
        vector<vector<string>> ans(mpp.size());
        int i = 0;
        for (auto iter : mpp)
        {
            for (auto it : iter.second)
            {
                ans[i].push_back(it);
            }
            i += 1;
        }
        return ans;
    }
};