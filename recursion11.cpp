// // Power set 

#include<bits/stdc++.h>
using namespace std;

// class soln {
// 	private :
// 	void solve(int index, vector<int> nums, vector<int> output, vector<vector<int>>& ans) {
// 		//base class
// 		if (index >= nums.size()) {
// 			ans.push_back(output);
// 			return;
// 		}

// 		//exclude condition
		
// 		solve(index+1, nums, output, ans);

// 		//Include condition

// 		int element = nums[index];
// 		output.push_back(element);
// 		solve(index+1, nums, output, ans);
// 		}

// 	public :
// 		vector <vector<int> > subsets(vector<int> & nums) {

// 		vector<vector<int> > ans;
// 		vector <int> output;
// 		int index = 0;
// 		solve(index, nums, output, ans);
// 		return ans;
// 	}	
// };

class Solution {
private:
    void solve(vector<int> nums, vector<int> output, int index, vector<vector<int> >& ans) {
        //base case
        if(index >= nums.size()) {
            ans.push_back(output);
            return ;
        }
        
        //exclude
        solve(nums, output, index+1, ans);
        
        //include
        int element = nums[index];
        output.push_back(element);
        solve(nums, output, index+1, ans);
        
    }
    
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<vector<int> > ans;
        vector<int> output;
        int index = 0;
        solve(nums, output, index, ans);
        return ans;
        
    }
};