// Problem link :
// https://practice.geeksforgeeks.org/problems/first-non-repeating-character-in-a-stream1216/1

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
		string FirstNonRepeating(string A){
		    
		    queue<int> q;
		    string res = "";
		    unordered_map<char, int> count;
		    
		    for(int i = 0; i < A.length(); i++) {
		        
		        char ch = A[i]; 
		        
		        //increase count
		        count[ch]++;
		        
		        // push character in queue
		        q.push(ch);
		        
		        while(!q.empty()) {
		            if(count[q.front()] > 1) {
		                q.pop();
		            }
		            
		            else {
		                //non repeating character
		                res.push_back(q.front());
		                break;
		            }
		        }
		        
		        if(q.empty()) {
		            res.push_back('#');
		        }
		    }
		    return res;
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends