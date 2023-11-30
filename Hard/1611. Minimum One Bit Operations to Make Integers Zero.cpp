class Solution {
public:
    int minimumOneBitOperations(int n) {
        //trans ith 0->1 or 1->0 need 2^i -1 step
        //ex: 100 -> 110 -> 010 ->000 (3 + 1 + 3)
        int res = 0;
        while (n > 0) {
            res = -(res + (n ^ (n-1)));
            n = n & (n-1);
        }

        return abs(res);
    }
};
