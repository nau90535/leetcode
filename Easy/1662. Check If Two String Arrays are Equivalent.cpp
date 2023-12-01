class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string str1, str2;
        for (const auto w : word1) {
            str1.append(w);
        }
        for (const auto w : word2) {
            str2.append(w);
        }

        return str1 == str2;
    }
};
