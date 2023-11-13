class Solution {
public:
    string sortVowels(string s) {
        //get vowel index in s & char
        vector<char> vowel;
        vector<int> vowelIndex;
        for (int i=0; i<s.size(); i++) {
            if (string("AEIOUaeiou").find(s[i]) != string::npos) {
                vowel.push_back(s[i]);
                vowelIndex.push_back(i);
            }
        }
        //sort vowel by ASCII number
        sort(vowel.begin(), vowel.end(), [](auto a, auto b) {return int(a) < int(b);});
        
        //insert the sorted vowel to s
        for (int i=0; i<vowelIndex.size(); i++ ) {
            s[vowelIndex[i]] = vowel[i];
        }

        return s;
    }
};
