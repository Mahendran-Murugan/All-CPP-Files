class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        int v_len = words.size();
        int s_len = s.length();
        if(v_len != s_len) return false;
        for(int i = 0; i < v_len; i++)
            if(words[i][0] != s[i]) return false;
        return true;
    }
};