// Problem Link :
// https://www.codingninjas.com/studio/problems/print-like-a-wave_893268?utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_6


vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    //Write your code here
    vector <int> ans;
    
    for (int col = 0; col < mCols; col++) {
        
        if (col & 1) {
            for (int row = nRows-1; row >= 0; row--) {
                    ans.push_back(arr[row][col]);
            }
        }
        //top to bottom (even)
        else {
            for(int row = 0; row < nRows; row++) {
                ans.push_back(arr[row][col]);
            }
        }
    }
    return ans;
}