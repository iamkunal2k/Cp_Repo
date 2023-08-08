// Problem link:
// https://leetcode.com/problems/combination-sum-ii/submissions/
// https://www.codingninjas.com/studio/problems/759331?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=0



class Solution {
public:

    void SubsetSum(int index, vector<int>& arr, int target, vector<vector<int>> &ans, vector<int> &ds) {

        // base condition
        if (target == 0) {
            ans.push_back(ds);
            return;
        }

        // Condition for Recurive call

        for(int i = index; i < arr.size(); i++) {
            
            if(i > index && arr[i] == arr[i - 1]) continue;
            if(arr[i] > target) break;

            ds.push_back(arr[i]);
            SubsetSum(i + 1, arr, target - arr[i], ans, ds);
            ds.pop_back();
        }


    }

    vector<vector<int>> combinationSum2(vector<int>& arr, int target) {
        
        vector<vector<int>> ans;
        vector<int> ds;
        sort(arr.begin(), arr.end());
        SubsetSum(0, arr, target, ans, ds);
        return ans;
    }
};