//Codestudio
// pair sum  question in Array

#include <bits/stdc++.h> 
vector<vector<int>> pairSum(vector<int> &arr, int s){
    
	// for storing answer create ans vector which will store values form temp variable (basically it will  store the vector value so we will consider vector< vector<int>>)
    vector<vector<int>> ans;				
    
    for (int i = 0; i < arr.size(); i++) {
    
        for (int j= i+1; j <arr.size(); j++) {
    
            if (arr[i]+arr[j] == s) {
    
                vector <int> temp;

                //first store the minimum value in temp variable
                temp.push_back(min(arr[i], arr[j]));

                //then store the maximum value in the temp varible
                temp.push_back(max(arr[i], arr[j]));
                ans.push_back(temp);
            }   
        }
    }

    //sorting the ans in the decreasing order

    sort(ans.begin(), ans.end());
    return ans;
}