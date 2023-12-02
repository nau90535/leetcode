class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        //store all elements of string "chars" into a hash table "cha" <char,int(num)>
        unordered_map<char, int> cha;
        for (const char c : chars) {
            if (cha.find(c) == cha.end()) {cha[c] = 1;}
            else {cha[c] ++;}
        }

        //find if the string in words can be formed by characters from chars
        int len = 0;
        for (const string w : words) {
            unordered_map<char, int> str = cha;
            for (int i=0; i<w.length(); i++) {
                char c = w[i];
                if (str.find(c) == str.end()) {break;}
                else if (str[c] == 0) {break;}
                else {str[c] --;}

                if (i == w.length()-1) {len += w.length();}
            }
        }

        return len;
    }
};
