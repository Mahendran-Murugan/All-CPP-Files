class Solution {
public:
    int titleToNumber(string columnTitle) {
        long long alphaVal = 0, powVal = 1, len = columnTitle.length()+1;

        while(--len){
            alphaVal += (columnTitle[len-1]-'A'+1)*powVal;
            powVal *= 26; 
        }

        return alphaVal;
    }
};