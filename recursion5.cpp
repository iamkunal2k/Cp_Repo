// printing n numbers in the reverse order using backtracking

#include <bits/stdc++.h>
using namespace std;

void f(int i, int n) {
	if (i==-1){
		return;
	}
	f(i-1, n);

	if (i == n) {
		return;
	}
	cout<<n-i<<endl;
}

int main(){
	int n;
	cin>>n;
	f(n, n);
}

// void f(int i, int j){
// 	if(i==-1)  return;
// 	f(i-1, j);
// 	if(i==j)  return;
// 	cout<<j-i<<" ";
// }
// int main (){
// int N;
// cin>>N;
// f(N, N);
// }