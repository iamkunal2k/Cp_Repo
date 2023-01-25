//Example of Multiple Recursion Calls
//Finding Fibonacci Number using Recursion

#include <bits/stdc++.h>
using namespace std;

int fun(int i) {
	if (i <= 1) return i;
	int last = fun(i-1);
	int slast = fun(i-2);
	return last + slast;
}

int main() {
	int n;
	cin>>n;
	cout<<fun(n);
}