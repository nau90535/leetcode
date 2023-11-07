class Solution {
public:
    string reverseVowels(string s) {
        //find first(-->) & last(<--) vowel, and reverse
        int start = 0, end = s.size()-1;
        string vowels = "aeiouAEIOU";
        while (start < end) {
            if (vowels.find(s[start]) == string::npos) {start++; continue;}
            if (vowels.find(s[end]) == string::npos) {end--; continue;}
            char temp = s[start];
            s[start] = s[end];
            s[end] = temp;
            start++;
            end--;
        }

        return s;
    }
};
