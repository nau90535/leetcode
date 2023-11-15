class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int current = 1;
        //current means: num = arr[i] should becomes current
        for (auto num : arr) {
            if (current <= num) {
                ++current;
            }
        }

        return current - 1;
    }
};
