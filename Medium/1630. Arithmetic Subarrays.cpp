class Solution {
public:
    bool isArithmetic(vector<int>& nums, int l, int r) {
        int len = r - l + 1;
        int minNum = INT_MAX;
        int maxNum = INT_MIN;

        for (int i=l; i<=r; i++) {
            minNum = min(minNum, nums[i]);
            maxNum = max(maxNum, nums[i]);
        }
        //find max & min number to count common difference
        if ((maxNum - minNum) % (len - 1) != 0) {return false;}
        int diff = (maxNum - minNum) / (len - 1);
        if (diff == 0) {return true;}

        //is these number Arithmetic
        for (int i=l; i<=r; i++) {
            if ((nums[i] - minNum) % diff != 0) {return false;}
        }
        vector<int> position(len, 0);
        for (int i=l; i<=r; i++) {
            int pos = (nums[i] - minNum) / diff;
            if (pos >= len) {return false;}
            position[pos] ++;
            if (position[pos] > 1) {return false;}
        }

        return true;
    }

    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool> ans;
        for (int i=0; i<l.size(); i++) {
            ans.push_back(isArithmetic(nums, l[i], r[i]));
        }

        return ans;
    }
};
