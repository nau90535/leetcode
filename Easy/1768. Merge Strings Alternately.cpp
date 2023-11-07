class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string merged;
        int len1 = word1.size(), len2 = word2.size(), i = 0;
        while (i<=len1 || i<=len2) {
            if (i<len1) {
                merged = merged + word1[i];
            }
            if (i<len2) {
                merged = merged + word2[i];
            }

            i++;
        }

        return merged;
    }
};
