class Solution {
public:
    string largestOddNumber(string num) {
        string odd = "13579";
        int i = num.length() - 1;
        while (i>=0) {
            if (odd.find(num[i]) != string::npos) {break;}
            i--;
        }

        if (i == -1) {return "";}
        string ans = "";
        for (int j=0; j<=i; j++) {
            ans += num[j];
        }
        return ans;
    }
};
