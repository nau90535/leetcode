class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
        //m = nums.size(), n = max row length in nums
        //totalDiagonal = how many diagonals
        int m = nums.size(), n = 0, totalDiagonal = 0;
        unordered_map<int, vector<int>> everyDiagonal;

        //respectively fill in the diagonal values ​​in reverse order
        for (int row=0; row<m; row++) {
            n = max(n, (int)nums[row].size());
            for (int col=0; col<nums[row].size(); col++) {
                int diag = row + col;
                everyDiagonal[diag].push_back(nums[row][col]);
            }
        }
        totalDiagonal = m + n - 1;

        //start from first diagonal, push back element in to vector
        vector<int> diagonals;
        for (int diag=0; diag<totalDiagonal; diag++) {
            int tail = everyDiagonal[diag].size()-1;
            for (int index=tail; index>=0; index--) {
                diagonals.push_back(everyDiagonal[diag][index]);
            }
        }

        return diagonals;
    }
};
