class Solution {
public:
    int maxCoins(vector<int>& piles) {
        //sort vector
        //sigma(n,3n-2,n+2i) is coins
        sort(piles.begin(), piles.end());
        int n = piles.size() / 3;
        int coins = 0;
        for (int i=3*n-1; i>n; i-=2) {
            coins += piles[i-1];
        }

        return coins;
    }
};
