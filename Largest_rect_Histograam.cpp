// problem link
// https://leetcode.com/problems/largest-rectangle-in-histogram/description/

class Solution {
private:
    
    vector<int> nextSmallerElem(vector<int> arr, int n) {
    stack<int> s;
    s.push(-1);

    vector<int> ans(n);

    for(int i = n-1; i >= 0; i--) {

        int cur = arr[i];
        while(s.top() != -1 && arr[s.top()] >= cur) {
            s.pop();
        }

        //ans is stack top
        ans[i] = s.top();
        s.push(i);
    }
    return ans;
    }   

    vector<int> previousSmallerElem(vector<int> arr, int n) {
    stack<int> s;
    s.push(-1);

    vector<int> ans(n);

    for(int i = 0; i < n ; i++) {

        int cur = arr[i];
        while(s.top() != -1 && arr[s.top()] >= cur) {
            s.pop();
        }

        ans[i] = s.top();
        s.push(i);
    }
    return ans;
    }   

public:

    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();

        vector<int> next(n);
        next = nextSmallerElem(heights, n);
        
        vector<int> previous(n);
        previous = previousSmallerElem(heights, n);

        int area = INT_MIN;

        for(int i = 0; i < n; i++ ) {
            int l = heights[i];
            
            // Important step
            if(next[i] == -1) {
                next[i] = n;
            }

            int w = next[i] - previous[i] - 1;
            int newArea = l*w;
            area = max(area, newArea);
        }
        return area;
    }
};