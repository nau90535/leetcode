//two point
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        int left = 0, right = n-1;
        while (left <= right) {
            int sum = numbers[left] + numbers[right];
            if (sum > target) {right -= 1;}
            else if (sum < target) {left += 1;}
            else {return {left+1, right+1};}
        }
        //did not find
        return {};
    }
};
