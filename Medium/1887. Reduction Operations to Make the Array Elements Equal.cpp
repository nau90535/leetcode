class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        //Record the number of occurrences of each number in nums (1~50000)
        vector<int> numTable(50000, 0);
        for (auto num : nums) {
            numTable[num-1] += 1;
        }
        //Record the number of occurrences more than once from smallest to largest
        vector<int> uniqueNum;
        for (auto num : numTable) {
            if (num != 0) {uniqueNum.push_back(num);}
        }
        //count the number of operations to make all elements in nums equal
        int n = uniqueNum.size();
        if (n == 1) {return 0;}
        int reduce = 0;
        for (int freq=n-1; freq>0; freq--) {
            reduce += uniqueNum[freq] * freq;
        }

        return reduce;
    }
};
