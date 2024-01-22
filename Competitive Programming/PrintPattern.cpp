//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    void recPattern(vector<int> &ans, int n)
    {
        if (n > 0)
        {
            ans.push_back(n);
            recPattern(ans, n - 5);
            ans.push_back(n);
        }
        else
        {
            ans.push_back(n);
        }
    }

    vector<int> pattern(int N)
    {
        vector<int> ans;
        recPattern(ans, N);
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;

        Solution ob;
        vector<int> ans = ob.pattern(N);
        for (int u : ans)
            cout << u << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends