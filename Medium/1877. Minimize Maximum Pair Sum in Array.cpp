class Solution {
public:
    int minPairSum(vector<int>& nums) {
        //sort, and pair = (front + tail), front index + 1, tail index - 1...
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int maxPair = INT_MIN;

        for (int i=0; i<n/2; i++) {
            int pairSum = nums[i] + nums[n-1-i];
            if (maxPair < pairSum) {maxPair = pairSum;}
        }

        return maxPair;
    }
};
