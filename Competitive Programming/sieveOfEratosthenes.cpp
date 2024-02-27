/*  It is algorithm to find prime no in the range with
    Expected Time Complexity: O(NloglogN)
    Expected Auxiliary Space: O(N)
    gfg practice link: https://www.geeksforgeeks.org/problems/sieve-of-eratosthenes5242/1
*/

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> sieveOfEratosthenes(int n)
    {
        vector<int> ans;
        vector<bool> prime(n + 1, true);
        for (int i = 2; i <= n; i++)
        {
            if (prime[i])
            {
                for (int j = i * i; j <= n; j = j + i)
                {
                    prime[j] = false;
                }
            }
        }
        for (int i = 2; i <= n; i++)
        {
            if (prime[i])
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        Solution ob;
        vector<int> primes = ob.sieveOfEratosthenes(N);
        for (auto prime : primes)
        {
            cout << prime << " ";
        }
        cout << endl;
    }
    return 0;
}