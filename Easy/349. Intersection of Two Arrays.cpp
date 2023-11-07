//hash table (unordered_map) practice
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size(), n2 = nums2.size();
        vector<int> ans;
        unordered_map<int, int> table1, table2;
        //put nums1's element in hash table, unique, key is nums1[i]
        for (int i=0; i<n1; i++) {
            if (table1.find(nums1[i]) == table1.end()) {
                table1[nums1[i]] = nums1[i];
            }
        }
        
        //find if nums2[i] in table1(the table means unique element with nums1), and check
        //don't repeat insert in ans
        for (int i=0; i<n2; i++) {
            if (table1.find(nums2[i]) == table1.end()) {}
            else if (find(ans.begin(), ans.end(), nums2[i]) == ans.end()) {
                ans.push_back(nums2[i]);
            }
        }

        return ans;
    }
};
