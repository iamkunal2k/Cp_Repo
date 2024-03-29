// Problem link:
// https://practice.geeksforgeeks.org/problems/reverse-first-k-elements-of-queue/1

//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
queue<int> modifyQueue(queue<int> q, int k);
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n, k;
        cin >> n >> k;
        queue<int> q;
        while (n-- > 0) {
            int a;
            cin >> a;
            q.push(a);
        }
        queue<int> ans = modifyQueue(q, k);
        while (!ans.empty()) {
            int a = ans.front();
            ans.pop();
            cout << a << " ";
        }
        cout << endl;
    }
}
// } Driver Code Ends


// User function Template for C++

// Function to reverse first k elements of a queue.
queue<int> modifyQueue(queue<int> q, int k) {
    
    // Step 1 :  pop first k elements from queue and posh in stack
    stack<int> s;
    
    for(int i = 0; i < k; i++) {
        
        s.push(q.front());
        q.pop();
    }
    
    // Step 2 : fetch from stack and push into queue
    while(!s.empty()) {
        
        q.push(s.top());
        s.pop();
    }
    
    // Step 3 : fetch first (n-k) elements and push back
    int t = q.size() - k;
    while(t--) {
        
        int elem = q.front();
        q.pop();
        q.push(elem);
    }
    
    return q;
    
}