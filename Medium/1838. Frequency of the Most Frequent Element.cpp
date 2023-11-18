class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        //sort nums, from the right side(max number), 
        //count the frequency of number we can create (sliding window)
        sort(nums.begin(), nums.end());
        int maxFreq = 0;
        int right=nums.size()-1;
        int left = right;
        int point = k;
        while (left >= 0) {
            while (point >= 0) {
                left --;
                if (left < 0) {break;}
                point -= (nums[right] - nums[left]);
            }

            maxFreq = max(maxFreq, right-left);
            if (maxFreq > right) {break;}
            right --;
            point += (nums[right+1] - nums[right]) * (right - left + 1);
        }

        return maxFreq;
    }
};
