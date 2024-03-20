class Solution
{
public:
    string maximumOddBinaryNumber(string s)
    {
        string res = "";
        bool firstOne = false;
        for (char i : s)
        {
            if (i == '0')
            {
                res += i;
            }
            else
            {
                if (!firstOne)
                {
                    firstOne = true;
                    continue;
                }
                else
                {
                    res = i + res;
                }
            }
        }
        if (firstOne)
            res += '1';
        return res;
    }
};