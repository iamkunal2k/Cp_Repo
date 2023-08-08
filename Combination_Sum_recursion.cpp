// Problem link:
// https://leetcode.com/problems/combination-sum/
// https://www.codingninjas.com/studio/problems/759331?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=0


class Solution {
public:

    void findCombinationSum(int index, int target, vector<int>& arr, vector<vector<int>> &ans, vector<int> &ds) {

        // Base condition

        if(index == arr.size()) {
            if(target == 0) {
                ans.push_back(ds);
            }
            return;
        }

        // Recursive call
        // Condition for picking an element

        if(arr[index] <= target) {
            ds.push_back(arr[index]);
            findCombinationSum(index, target - arr[index], arr, ans, ds);
            ds.pop_back();
        }

        // Condition for not picking an element
        findCombinationSum(index + 1, target, arr, ans, ds);
    }


    vector<vector<int>> combinationSum(vector<int>& arr, int target) {
        
        vector<vector<int>> ans;
        vector<int> ds;

        findCombinationSum(0, target, arr, ans ,ds);
        return ans;
    }
};