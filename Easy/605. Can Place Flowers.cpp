class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        //count how many plots can be planted
        int num = 0;
        bool left_is_0;
        bool right_is_0;
        for (int i =0; i < flowerbed.size(); i++) {
            left_is_0 = 0;
            right_is_0 = 0;
            if (flowerbed[i] == 0) {
                //check if left & right are 0(consider that index = 0 or flowerbed.size()-1)
                if (i == 0) {
                    left_is_0 = 1;
                }
                else {left_is_0 = (flowerbed[i-1] == 0);}

                if (i == flowerbed.size()-1) {
                    right_is_0 = 1;
                }
                else {right_is_0 = (flowerbed[i+1] == 0);}

                //if left_is_0 & right_is_0 are true, flowerbed[i] = 1, num++
                if (left_is_0 && right_is_0) {
                    flowerbed[i] = 1;
                    num++;
                }
            }
        }

        if (n <= num) {return true;}
        else {return false;}
    }
};
