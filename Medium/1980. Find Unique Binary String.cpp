//sol 1
class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        int bits = nums.size();
        unordered_set<int> numberSet;
        //binary to decimal, and add into set
        for (const string& str : nums) {
            char* endptr;
            int num = (int) strtoul(str.c_str(), &endptr, 2);
            numberSet.insert(num);
        }
        
        //start from 0, find the number did not appear in the set
        int notAppearNum = 0;
        for (int i=0; i<pow(2,bits); i++) {
            if (numberSet.count(i) == 0) {
                notAppearNum = i;
                break;
            }
            else {continue;}
        }
        //convert the number to binary, and to string, length is nums.size()
        return bitset<16> (notAppearNum).to_string().substr(16-bits);
    }
};


/* sol 2

class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        int bits = nums.size();
        string notAppearNum;

        //if nums[0][0] = 0, then choose 1 at the position [0], the string will be different from num[0]
        //do same thing at every idex, that we can get a string different to all string in nums
        for (int i=0; i<bits; i++) {
            notAppearNum += nums[i][i] == '0' ? '1' : '0';
        }

        return notAppearNum;
    }
};

*/
