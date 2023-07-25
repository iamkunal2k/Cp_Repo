// problem link :
// https://www.codingninjas.com/studio/problems/minimum-cost-to-make-string-valid_1115770?leftPanelTab=0&campaign=Lovebabbarcodestudio&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbarcodestudio


#include <bits/stdc++.h> 
int findMinimumCost(string str) {

  //odd case
  if(str.length() % 2 == 1) {
    return -1;
  }

  stack<char> s;
  for(int i = 0; i < str.length(); i++ ) {
    char ch = str[i];

    if ( ch == '{' ) {
      s.push(ch);
    }

    else {
      
      // ch is closed
      if(!s.empty() && s.top() == '{' ){
        s.pop();
      }

      else {
        s.push(ch);
      }
    }
  }

  // stack contain invalid expressions
  int a = 0; 
  int b = 0;
  
  while(!s.empty()) {
    if(s.top() == '{' ){
    b++;
  } 

  else {
    a++;
  }
  s.pop();
  }

  int ans = (a+1)/2 + (b+1)/2;
  return ans;
}