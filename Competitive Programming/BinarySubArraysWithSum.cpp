class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int, int> mpp;
        mpp[0] = 1;
        int curr = 0;
        int ans = 0;

        for (int num : nums) {
            curr += num;
            if (mpp.find(curr - goal) != mpp.end()) {
                ans += mpp[curr - goal];
            }
            mpp[curr]++;
        }

        return ans;
    }
};