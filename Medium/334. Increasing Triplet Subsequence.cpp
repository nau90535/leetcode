class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int n = nums.size();
        //find_min 為最小的數, find_mid 為在這之前有個比他小的數
        //因此,找到比find_mid大的數時, return true
        int find_min = INT_MAX, find_mid = INT_MAX;
        for (int num : nums) {
            if (num < find_min) {
                find_min = num;
            }

            else if (num > find_min && num < find_mid) {
                find_mid = num;
            }

            else if (num > find_mid) {
                return true;
            }
        }

        return false;
    }
};
