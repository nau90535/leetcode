class Solution {
public:
    string reverseWords(string s) {
        string str, temp_str;
        int end = s.size() - 1;
        //由後往前讀,逐個字母存入temp_str中,讀完一個單字後reverse單字,存入str
        for (int i = 0; i < s.size(); i++) {
            if (s[end-i] == ' ') {
                //ignore extra whitespace
                if (temp_str == "") {continue;}
                //前面有沒有單字,需不需要+空白
                if (str != "") {str = str + " ";}
                reverse(temp_str.begin(), temp_str.end());
                str = str + temp_str;
                temp_str = "";
            }
            else {temp_str = temp_str + s[end-i];}
        }
        //check last temp_str add to str or not
        if (temp_str != "") {
            if (str != "") {str = str + " ";}
            reverse(temp_str.begin(), temp_str.end());
            str = str + temp_str;
            temp_str = "";
        }
        
        return str;
    }
};
