// Problem  link :
// https://www.codingninjas.com/studio/problems/delete-middle-element-from-stack_985246?leftPanelTab=0&campaign=Lovebabbarcodestudio&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbarcodestudio

#include <bits/stdc++.h> 

void solve(stack<int>&inputStack, int count, int N) {

   //base case
   if(count == N/2) {
      inputStack.pop();
      return ;
   }

   int num = inputStack.top();
   inputStack.pop();

   //Recursive case
   solve(inputStack, count+1, N);
   inputStack.push(num);
}


void deleteMiddle(stack<int>&inputStack, int N){
	
   int count = 0;
   solve(inputStack, count, N);
   
}