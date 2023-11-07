class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        //find the greatest number of candies
        int greatest = 0;
        for (int i=0; i < candies.size(); i++) {
            greatest = max(greatest, candies[i]);
        }

        //candies[i]+extraCandies >= greatest --> true, otherwise is false
        vector<bool> ans;
        for (int i=0; i < candies.size(); i++) {
            if ((candies[i] + extraCandies) >= greatest) {ans.push_back(1);}
            else {ans.push_back(0);}
        }

        return ans;
    }
};
