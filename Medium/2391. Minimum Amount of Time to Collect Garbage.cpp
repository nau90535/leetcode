class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        //track(G,P,M) respectively record the time spent picking up various types of garbage
        //travelTime -> time of moved to the current location after the last pick up the tpye of garbage
        int trackG = 0, trackP = 0, trackM = 0;
        int travelTimeG = 0, travelTimeP = 0, travelTimeM = 0;
        for (int i=0; i<garbage.size(); i++) {
            for (const auto type : garbage[i]) {
                if (type == 'G') {
                    trackG += 1;
                    trackG += travelTimeG;
                    travelTimeG = 0;
                }

                else if (type == 'P') {
                    trackP += 1;
                    trackP += travelTimeP;
                    travelTimeP = 0;
                }

                else if (type == 'M') {
                    trackM += 1;
                    trackM += travelTimeM;
                    travelTimeM = 0;
                }
            }

            if (i == travel.size()) {break;}
            travelTimeG += travel[i];
            travelTimeP += travel[i];
            travelTimeM += travel[i];
        }

        return trackG + trackP + trackM;
    }
};
