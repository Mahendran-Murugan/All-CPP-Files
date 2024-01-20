#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> matrixDiagonally(vector<vector<int>> &mat)
    {
        vector<int> ans;
        map<int, vector<int>> mpp;
        int n = mat.size();
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                mpp[i + j].push_back(mat[i][j]);
            }
        }
        int i = 0;
        for (auto iter : mpp)
        {
            if (i % 2 != 0)
            {
                for (auto it : iter.second)
                {
                    ans.push_back(it);
                }
            }
            else
            {
                reverse(iter.second.begin(), iter.second.end());
                for (auto it : iter.second)
                {
                    ans.push_back(it);
                }
            }
            i++;
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int n;
        int k = 0;
        // cin>>k;
        cin >> n;
        vector<vector<int>> mat(n, vector<int>(n));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> mat[i][j];
            }
        }
        Solution obj;
        vector<int> ans = obj.matrixDiagonally(mat);
        for (auto i : ans)
            cout << i << " ";
        cout << "\n";
    }
}
// } Driver Code Ends