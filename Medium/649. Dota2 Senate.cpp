//record senator's right into rightToBan,
//when different party appear, delete it and rightToBan.pop()
class Solution {
public:
    string predictPartyVictory(string senate) {
        queue<char> senator, rightToBan;
        for (int i=0; i<senate.size(); i++) {
            senator.push(senate[i]);
        }

        while(true) {
            if (rightToBan.empty()) {rightToBan.push(senator.front());}
            else if (senator.front() == rightToBan.front()) {rightToBan.push(senator.front());}
            else {
                senator.pop();
                rightToBan.pop();
                continue;
            }

            senator.push(senator.front());
            senator.pop();

            if (rightToBan.size() >= senator.size()) {break;}
        }

        if (rightToBan.front() == 'R') {return "Radiant";}
        else {return "Dire";}
    }
};
