//use Dynamic Programming
class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        //vector.size() = n, all element are 1
        vector<int> dp(n,1);
        //dp[i] is the longest increase subsequence of nums[0..i] 
        //which has nums[i] as the end element of the subsequence.
        for (int i=0; i<n; i++) {
            for (int j=0; j<i; j++) {
                if (nums[i] > nums[j]) {
                    dp[i] = fmax(dp[i],dp[j]+1);
                }
            }
        }
        int max_length = *max_element(dp.begin(),dp.end());
        return max_length;
    }
};
