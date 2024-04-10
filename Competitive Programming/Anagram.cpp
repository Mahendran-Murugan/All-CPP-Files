#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1 = "Maha", s2 = "ahaM";
    bool flag = true;
    map<char, int> mpp;
    for (char i : s1)
    {
        mpp[i]++;
    }
    for (char i : s2)
    {
        mpp[i]--;
        if (mpp[i] == 0)
            mpp.erase(i);
    }
    if (mpp.empty())
        cout << "Anagram";
    else
        cout << "Not Anagram";
}