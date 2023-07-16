// Problem Link :
// https://leetcode.com/problems/valid-palindrome/description/



#include<bits/stdc++.h>
using namespace std;


class Solution {
    private:
        bool valid(char ch) {
            if( (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')) {
                return 1;
            }
            
            return 0;
        }

        char toLowerCase(char ch) {
            if( (ch >='a' && ch <='z') || (ch >='0' && ch <='9') )
                return ch;
            else{
                char temp = ch - 'A' + 'a';
                return temp;
            }
        }
        bool palindrome(string temp){
    	int s = 0;
    	int e = temp.length()-1;
    
        	while(s<=e) {
        		if(temp[s] != temp[e]) {
        			return 0;
        		}
        		else{
        			s++;
        			e--;
        		}
        	}
    	return 1;
        }
     
    
public:
    bool isPalindrome(string s) {
        // Remove unwanted character
        string temp="";
        for(int i=0; i < s.length(); i++) {
            if(valid(s[i])) {
                temp.push_back(s[i]);
            }
        }
        
        // Convert it in lowercase
        for(int i=0; i < temp.length(); i++) {
            temp[i] = toLowerCase(temp[i]);
        }
        // check palindorme
        return palindrome(temp);
    }
};