// Problem Link :
// https://leetcode.com/problems/search-a-2d-matrix/description/
// https://www.codingninjas.com/studio/problems/search-in-a-2d-matrix_980531?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=1

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int row = matrix.size();
        int col = matrix[0].size();

        int s = 0;
        int e = row * col - 1;

        int  mid = s + (e - s)/2 ;

        while(s <= e) {

            int elem = matrix[mid/col][mid%col];

            if ( elem == target ) {
                return 1;
            }

            else if ( elem > target ) {
                e = mid - 1;
            }

            else {
                s = mid + 1;
            }

            mid = s + (e - s)/2 ;
        }

        return 0;
        
    }
};



/*

bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int s = 0;
        if(!matrix.size()) return false;
        int e = (matrix.size() * matrix[0].size()) - 1;
        
        while(s <= e) {
            int mid = (s + (e - s) / 2);
            if(matrix[mid/matrix[0].size()][mid % matrix[0].size()] == target) {
                return true;
            }
            if(matrix[mid/matrix[0].size()][mid % matrix[0].size()] < target) {
                s = mid + 1;
            }
            else {
                e = mid - 1;
            }
        }
        return false;
}


*/