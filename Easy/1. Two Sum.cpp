//hash table
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int, int> hash_table;
        for (int i=0; i<n; i++) {
            //did not find
            if (hash_table.find(target - nums[i]) == hash_table.end()) {
                hash_table[nums[i]] = i;
            }
            else {
                return {hash_table[target - nums[i]], i};
            }
        }
        //did not find
        return {};
    }
};
