class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int n = nums.size();
        int sum = nums[0];
        vector<int> cumulativeDiff = {0};
        //sum of all elements in nums, there n elements in nums
        //difference between i, i-1
        //ex: nums = [x0, x1, x2, x3], difference with adjacent element is [0, y1, y2, y3]
        //cause nums is sorted, answer array[0] = sum - n*x0, answer array[1] = sum - n*x1 + 2*y1
        //answer array[2] = sum - n*x2 + 2*y2 + 4*y2, ...
        for (int i=1; i<n; i++)  {
            sum += nums[i];
            int adjDiff = nums[i] - nums[i-1];
            cumulativeDiff.push_back(cumulativeDiff[i-1] + adjDiff * i);
        }

        //
        vector<int> absDiff;
        for (int i=0; i<n; i++) {
            int common = sum - n * nums[i];
            absDiff.push_back(common + 2 * cumulativeDiff[i]);
        }

        return absDiff;
    }
};
