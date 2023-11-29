class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count = 0;
        //brian kernighan's algorithm
        while (n != 0) {
            n = n & (n-1);
            count ++;
        }
        
        return count;
    }
};
