class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        string ans;
        //不符合表示無string同時整除str1,str2
        if (str1+str2 == str2+str1) {
            int len1 = str1.size(), len2 = str2.size(), remainder = 1;
            //輾轉相除法求最大公因數, len1 = gcd(len1,len2), 可以用gcd(str1.size(), str2.size())直接求gcd
            while (remainder != 0) {
                remainder = len1 % len2;
                len1 = len2;
                len2 = remainder;
            }
            //str1 or str2的 [0:gcd] 即為所求
            ans = str1.substr(0,len1);
            return ans;
        }
        else {
            return ans;
        }
    }
};
