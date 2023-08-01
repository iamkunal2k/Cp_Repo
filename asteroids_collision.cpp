// Problem Link :
// Leetcode : https://leetcode.com/problems/asteroid-collision/submissions/
// GFG : https://practice.geeksforgeeks.org/problems/asteroid-collision/1?utm_source=youtube&utm_medium=courseteam_practice_desc&utm_campaign=problem_of_the_day

class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        
        stack<int> s;

        for(int i = 0; i < asteroids.size(); i++) {
            if(s.empty() || asteroids[i] > 0) {
                s.push(asteroids[i]);
            }

            else {
                while(!s.empty() && s.top() > 0 && s.top() < abs(asteroids[i])) {
                    s.pop();
                }

                if(!s.empty() && s.top() == abs(asteroids[i])) {
                    s.pop();
                }
                else{
                    if(s.empty() || s.top() < 0) {
                        s.push(asteroids[i]);
                    }
                }
            }
        }

        vector<int> ans;
        while(!s.empty()) {
            ans.push_back(s.top());
            s.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};