class Solution {
public:
    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) {
        //find longer distance in x-axis distance & y-distance (start -> finish)
        //the distance means minimum time to reach
        //There are situation where the condition cannot be met 
        //1.(dist > t); 2.(t-dist == 1) && (dist=0)
        int dist = max(abs(sx-fx), abs(sy-fy));
        if (dist > t) return false;
        else if ((t-dist == 1) && (dist == 0)) return false;
        else return true;
    }
};
