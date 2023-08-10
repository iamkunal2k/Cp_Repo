// Problem Link:
// https://leetcode.com/problems/palindrome-partitioning/description/
// https://www.codingninjas.com/studio/problems/palindrome-partitioning_626181?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=1


class Solution {
public:

    void partitionHelper(int index, string s, vector<vector<string>> &ans, vector<string> &ds) {

        // base condition
        if(index == s.size()) {
            ans.push_back(ds);
            return;
        }

        // Codition for recursive call

        for(int i = index; i < s.size(); ++i ) {
            
            if(isPalindrome(s, index, i)) {
                ds.push_back(s.substr(index, i - index + 1));
                partitionHelper(i + 1, s, ans, ds);
                ds.pop_back();
            }
        }
    }

  bool isPalindrome(string s, int start, int end) {
    while (start <= end) {
      if (s[start++] != s[end--])
        return false;
    }
    return true;
  }


    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> ds;

        partitionHelper(0, s, ans, ds);
        return ans;
    }
};