class Solution {
public:
    bool isSubsequence(string s, string t) {
        //find the first occurence of letter "s[i]" in the string t (suppose that index is k),
        //and then,from index k+1, find the first occurence of letter "s[i+1]" in the string t,
        //repeat until index >= t.size() (false) or find the last element of s in t (true)
        int index = -1;
        for (auto letter : s) {
            ++index;
            index = find(t.begin() + index, t.end(), letter) - t.begin();
            if (index >= t.size()) {return false;}
        }

        return true;
    }
};
