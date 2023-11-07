/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int left = 1, right = n, mid;
        while(left <= right) {
            mid = left + (right-left) / 2;
            if (guess(mid) <= 0) {
                right = mid - 1;
                }
            else {
                left = mid + 1;
                }
        }
        return left;
    }
};
