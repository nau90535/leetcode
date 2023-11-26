class Solution {
public:
    int largestSubmatrix(vector<vector<int>>& matrix) {
        //the area of the largest submatrix : height * width
        //so first, need to calculate continuous '1' as height (up to bottom) in every collumn
        int row = matrix.size(), col = matrix[0].size();
        for (int i=1; i<row; i++) {
            for (int j=0; j<col; j++) {
                if (matrix[i][j] == 1) {matrix[i][j] += matrix[i-1][j];}
            }
        }

        //from row 0, sort row to calculate & find the biggest area
        int area = 0;
        for (int i=0; i<row; i++) {
            sort(matrix[i].begin(), matrix[i].end());
            for (int j=col-1; j >=0; j--) {
                area = max(area, matrix[i][j] * (col - j));
            }
        }

        return area;
    }
};
