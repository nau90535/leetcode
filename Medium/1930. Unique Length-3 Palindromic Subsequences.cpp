class Solution {
public:
    int countPalindromicSubsequence(string s) {
        unordered_set<char> uniq;
        int num = 0;
        //find unique character in string s
        for (auto character : s) {
            uniq.insert(character);
        }
        //consider these unique character as endpoint of palindromic subssequence
        for (auto endpoint : uniq) {
            int start = s.find(endpoint);
            int end = s.rfind(endpoint);
            unordered_set<char> palindromicSeq;

            if (end - start > 1) {
                for (int i=start+1; i<end; i++) {
                    palindromicSeq.insert(s[i]);
                }
            }

            num += palindromicSeq.size();
        }

        return num;
    }
};
