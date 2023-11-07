//two pointer
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        int left = 0, right = n-1;
        int left_square = 0, right_square = 0;
        vector<int> squares(n, 0);
        for (int i=0; i<n; i++) {
            left_square = pow(nums[left], 2);
            right_square = pow(nums[right], 2);
            if (left_square <= right_square) {
                squares[n-1-i] = right_square;
                right -= 1;
            }
            else {
                squares[n-1-i] = left_square;
                left += 1;
            }
        }
        
        return squares;
    }
};
