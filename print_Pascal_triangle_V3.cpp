// Problem link :
// https://www.codingninjas.com/studio/problems/print-pascal-s-triangle_6917910?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_Arrayproblems&leftPanelTab=1


#include<bits/stdc++.h>

vector<int> generateRow(int row) {
    long long ans = 1;
    vector<int> ansRow;
    ansRow.push_back(1);
    for(int col = 1; col < row; col++) {
        ans =ans * (row - col);
        ans = ans / (col);
        ansRow.push_back(ans);
    }
    return ansRow;
}


vector<vector<int>> pascalTriangle(int N) {
    
    vector<vector<int>> ans;

    for(int i = 1; i <= N; i++) {

        ans.push_back(generateRow(i));
    }
    return ans;
}