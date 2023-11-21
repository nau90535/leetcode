class Solution {
public:
    //rev(123) return 321
    int rev(int num) {
        string numStr = to_string(num);
        reverse(numStr.begin(), numStr.end());
        const char *ptr = numStr.c_str();
        return (int) strtol(ptr, NULL, 10);
    }
    //a + rev(b) = rev(a) + b => a - rev(a) - (b - rev(b)) = 0
    //a - rev(a) = b - rev(b) -> nice pair
    //numMinusRev key = nums[i] - rev(nums[i]); value = how many "nums[i] - rev(nums[i])" is same
    int countNicePairs(vector<int>& nums) {
        long nicePair = 0;
        int mod = pow(10, 9) + 7;
        unordered_map<int, int> numMinusRev;

        for (const int num : nums) {
            int key = num - rev(num);
            if (numMinusRev.find(key) == numMinusRev.end()) {numMinusRev[key] = 1;}
            else {numMinusRev[key]++;}
        }

        for (const auto num : numMinusRev) {
            long n = num.second % mod;
            nicePair = (nicePair % mod + n * (n-1) / 2) % mod;
        }

        return (int) nicePair;
    }
};
