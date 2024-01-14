#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int addDigits(int num)
    {
        int sum = 0;
        while (num > 0)
        {
            sum += num % 10;
            num /= 10;
        }
        if (sum > 9)
            return addDigits(sum);
        else
            return sum;
    }
};

int main()
{
    Solution s;
    cout << s.addDigits(38);
    return 0;
}