// //summation of n numbers using recursion

// #include <bits/stdc++.h>
// using namespace std;

// void func(int i, int n) {
// 	if(i<1) {
// 		cout<<n<<endl;
// 		return ;
// 	}
// 	func(i-1, n+i);
// }

// int main() {
// 	int n;
// 	cin>>n;
// 	func(n, 0);
// }


//Summation of n numbers using parameterized function


#include <bits/stdc++.h>
using namespace std;

int f(int i) {
	if (i==0) {
		//Base condition
		return 0;
	}
	return i + f(i-1);
}

int main () {
	int n;
	cin>>n;
	cout<<f(n);
}
