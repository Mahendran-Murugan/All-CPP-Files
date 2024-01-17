#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string largestTimeFromDigits(vector<int> &arr)
    {
        sort(begin(arr), end(arr), greater<int>());
        do
            if ((arr[0] < 2 || (arr[0] == 2 && arr[1] < 4)) && arr[2] < 6)
                return to_string(arr[0]) + to_string(arr[1]) + ":" + to_string(arr[2]) + to_string(arr[3]);
        while (prev_permutation(begin(arr), end(arr)));
        return "";
    }
};