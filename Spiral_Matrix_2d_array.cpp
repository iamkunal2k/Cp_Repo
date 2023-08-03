// Problem link :
// https://leetcode.com/problems/spiral-matrix/submissions/

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {

        int row = matrix.size();
        int col = matrix[0].size();

        int count = 0;
        int total = row*col;
        
        int startRow = 0;
        int startCol = 0;
        int endingRow = row-1;
        int endingCol = col-1;

        vector<int> ans;

        while( count < total ) {

            for (int index = startCol; count < total && index <= endingCol; index++) {
                ans.push_back(matrix[startRow][index]);
                count++;
            }
            startRow++;

            for(int index = startRow;  count < total && index <= endingRow; index++) {
                ans.push_back(matrix[index][endingCol]);
                count++;
            }
            endingCol--;

            for(int index = endingCol;  count < total && index >= startCol; index--) {
                ans.push_back(matrix[endingRow][index]);
                count++;
            }
            endingRow--;

            for(int index = endingRow; count < total &&  index >= startRow; index--) {
                ans.push_back(matrix[index][startCol]);
                count++;
            }
            startCol++;
            
        }

        return ans;
    }
};