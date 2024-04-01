class Solution
{
public:
    int lengthOfLastWord(string s)
    {
        int count = 1;
        int len = s.length();
        len--;
        while (len >= 0)
        {
            if (s[len] != ' ' && (len == 0 || s[len - 1] == ' '))
            {
                break;
            }
            if (s[len] != ' ')
            {
                count++;
            }
            len--;
        }
        return count;
    }
};