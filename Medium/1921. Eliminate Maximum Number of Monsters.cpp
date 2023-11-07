class Solution {
public:
//arrive[i] means when monster[i] will arrive (dist/speed), then sort arrive[0:n-1]
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        vector<float> arrive;
        int numberOfMonster = dist.size();
        for (int i=0; i<numberOfMonster; i++) {
            arrive.push_back((float)dist[i] / speed[i]);
        }
        sort(arrive.begin(), arrive.end());

        for (int i=0; i<numberOfMonster; i++) {
            if (arrive[i] <= i) {return i;}
        }

        return numberOfMonster;
    }
};
