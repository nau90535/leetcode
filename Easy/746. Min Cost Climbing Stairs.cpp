class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        //minCost[i] record the minimum cost to reach cost[i]
        vector<int> minCost = {0,0};
        int n = cost.size();
        for (int i=2; i<n+1; i++) {
            minCost.push_back(min(minCost[i-1] + cost[i-1], minCost[i-2] + cost[i-2]));
        }

        return minCost[n];
    }
};
