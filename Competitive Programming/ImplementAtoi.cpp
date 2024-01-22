//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution
{
public:
    int atoi(string str)
    {
        int ans = 0, flag = 0;
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == '-' && i == 0)
            {
                flag = 1;
                continue;
            }
            if (str[i] >= '0' && str[i] <= '9')
            {
                ans = ans * 10 + (str[i] - '0');
            }
            else
            {
                return -1;
            }
        }
        if (flag)
            ans = -(ans);
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
        string s;
        cin >> s;
        Solution ob;
        cout << ob.atoi(s) << endl;
    }
}
// } Driver Code Ends