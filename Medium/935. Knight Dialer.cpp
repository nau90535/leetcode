class Solution {
public:
    int knightDialer(int n) {
        vector<vector<int>> move = {{4, 6}, {6, 8}, {7, 9}, {4, 8}, {0, 3, 9}, {}, {0, 1, 7}, {2, 6}, {1, 3}, {2, 4}};
        vector<long long> previous = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
        vector<long long> temp = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
        if (n == 1) return 10;
        int mod = pow(10, 9) + 7;


        for (int i=1; i<n; i++) {
            for (int j=0; j<10; j++) {
                for (const int k : move[j]) {
                    temp[k] = (temp[k] + previous[j]) % mod;
                }
            }

            for (int i=0; i<10; i++) {
                previous[i] = temp[i];
                temp[i] = 0;
            }
        }

        //overflow warning!!!
        return int(accumulate(previous.begin(), previous.end(), 0LL) % mod);
    }
};
