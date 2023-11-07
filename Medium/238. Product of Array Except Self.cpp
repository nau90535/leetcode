class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans, left_product, right_product;
        left_product.push_back(1), right_product.push_back(1);
        int n = nums.size();
        //left_product[i] = nums[0]*nums[1]*...*nums[i-1]
        //right_product[i] = nums[n-1]*...*nums[n-i]
        for (int i=1; i<n; i++) {
            left_product.push_back(left_product[i-1]*nums[i-1]);
            right_product.push_back(right_product[i-1]*nums[n-i]);
        }
        //count ans
        for (int i=0; i<n; i++) {
            ans.push_back(left_product[i]*right_product[n-1-i]);
        }

        return ans;

    }
};
