// Problem link :
// https://leetcode.com/problems/reverse-words-in-a-string/description/

class Solution {
public:
    string reverseWords(string s) {
        
        stack<string> st;
        string str ="";
        s +=" ";
        for(int i = 0; i <= s.length(); i++) {
            if(s[i] == ' ' ) {

                st.push(str);
                str="";
            }

            else {
                str += s[i];
            }
        }
        
        string res = "";
        while( st.size() != 1 ) {

            res += st.top() + " ";
            st.pop();
        }

        res += st.top();
        return res;
    }
};	