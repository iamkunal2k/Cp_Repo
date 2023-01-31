#include<bits/stdc++.h>
using namespace std;

int fact(int n) {
	int fact = 1;
	for (int i=1;i<=n; i++) {
		fact = fact * i;
	}

	return fact;
}

int nCr(int n, int r) {
	int numo = fact(n);
	int deno = fact(r) * fact(n-r);
	int ans  = numo/deno;
	return ans;
}

int main() {
	int a, b;
	cin>>a>>b;
	fact(a);
	cout<<nCr(a, b);
}