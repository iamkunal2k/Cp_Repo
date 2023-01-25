#include <bits/stdc++.h> 
vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
	vector<vector<int>> ans;
    
    for (int i = 0; i <arr.size(); i++) {
        for (int j = i+1; j < arr.size(); j++) {
            for (int m = i+2; m <arr.size(); m++) {
                if (arr[i] + arr[j] + arr[m] == K) {
                    vector<int> temp;
                    temp.push_back(arr[i]);
                    temp.push_back(arr[j]);
                    temp.push_back(arr[m]);
                    ans.push_back(temp);
                }
            }
        }
    }
    sort(ans.begin(), ans.end());
    return ans;
}