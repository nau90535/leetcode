//avoid overflow, when plus number, the result will % (109 + 7). cause we have to return sum % (109 + 7)
class Solution {
public:
    int sigma(int n, int modNum) {
        int sumOfNumber = 0;
        for(int i=1; i<=n; i++) {
            sumOfNumber = (sumOfNumber + i) % modNum;
        }
        return sumOfNumber;
    }
    //find the length of homogenous substring, than add sigma(len) into ans
    //ex: s = {abbaab}, that ans = sigma(1)+sigma(2)+sigma(2)+sigma(1)
    int countHomogenous(string s) {
        int sLength = s.length();
        int modNumber = pow(10, 9) + 7;
        int homoSubStrLen = 1;
        int numberOfHomoSubStr = 0;
        //this case cannot use loop
        if (sLength == 1) return 1;

        for(int i=0; i<sLength-1; i++) {
            if (s[i] == s[i+1]) {
                homoSubStrLen += 1;
            }
            else {
                numberOfHomoSubStr = (numberOfHomoSubStr + sigma(homoSubStrLen, modNumber)) % modNumber;
                homoSubStrLen = 1;
            }
        }

        if (s[sLength-2] == s[sLength-1]) {
            numberOfHomoSubStr = (numberOfHomoSubStr + sigma(homoSubStrLen, modNumber)) % modNumber;
        }
        else {
            numberOfHomoSubStr = (numberOfHomoSubStr + sigma(homoSubStrLen, modNumber)) % modNumber;
        }

        return numberOfHomoSubStr;


    }
};
