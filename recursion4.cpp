// print n numbers using backtracking 

#include <bits/stdc++.h>
using namespace std;

void func (int i , int n) {
	if (i < 1) {
		return ;
	}
	func(i-1, n);
	cout<<i<<endl;
}

int main() {
	int n ;
	cin>>n;
	func(n, n);
}