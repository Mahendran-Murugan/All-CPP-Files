class Solution
{
public:
    int maximum69Number(int num)
    {
        string n = to_string(num);
        for (int j = 0; j < n.length(); j++)
        {
            if (n[j] == '6')
            {
                n[j] = '9';
                break;
            }
        }
        return stoi(n);
    }
};