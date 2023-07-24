// Problem link :
// https://www.codingninjas.com/studio/problems/sort-a-stack_985275?topList=love-babbar-dsa-sheet-problems&leftPanelTab=1&campaign=Lovebabbarcodestudio&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbarcodestudio

#include <bits/stdc++.h> 

void insertStack(stack<int> &stack, int num) {

	//base case
	if ( stack.empty() || (!stack.empty() && num > stack.top() )) {
		stack.push(num);
		return;
	}

	int n = stack.top();
	stack.pop();

	//recursive call
	insertStack(stack, num);

	stack.push(n);
}

void sortStack(stack<int> &stack)
{
	// base case
	if (stack.empty()) {
		return;
	}

	int num = stack.top();
	stack.pop();

	// recursive call
	sortStack(stack);
	
	insertStack(stack, num);
}