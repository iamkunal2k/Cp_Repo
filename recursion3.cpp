// print n-1 numbers i.e. in the reverse order

#include <bits/stdc++.h>
using namespace std;

void Funct(int i, int n) {
	if (i < 1) {
		return ;
	}
	cout<<i<<endl;
	Funct(i-1, n);
}

int main() {
	int n;
	cin>>n;
	Funct(n, n);

}