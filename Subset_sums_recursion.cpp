// Problem link:
// https://practice.geeksforgeeks.org/problems/subset-sums2234/1
// https://www.codingninjas.com/studio/problems/subset-sum_3843086?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=1

//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:

    void sumHelper(int index, vector<int> &arr, int N, vector<int> &ans, int sum) {
        
        // Base condition
        if(index == N) {
            ans.push_back(sum);
            return;
        }
        
        // condition for the element is picked
        sumHelper(index + 1, arr, N, ans, sum + arr[index]);
        
        // Condition for the element is not picked
        sumHelper(index + 1, arr , N , ans, sum);
    }
    
    vector<int> subsetSums(vector<int> arr, int N)
    {
        vector<int> ans;
        sumHelper(0, arr, N, ans, 0);
        sort(ans.begin(), ans.end());
        return ans;
    
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends