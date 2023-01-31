#include <bits/stdc++.h>
using namespace std;

bool EvenOdd(int a) {
	if(a&1) return 0;
	else return 1;
}

int main () {
	int a;
	cin>>a;
	cout<<EvenOdd(a);
}