// print name 5 times 

#include<bits/stdc++.h>
using namespace std;

void f(int i, int n) {
	if (i > n) {
			return;}
		cout<<"Kunal"<<endl;
		f(i+1, n);	
}

int main() {
	int n ;
	int i = 1;
	cout<<"Enter the number of times you want to print : "<<endl;
	cin>>n; 
	f(i, n);
}