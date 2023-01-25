#include<bits/stdc++.h>
using namespace std;

int main() {
	int w;
	double ab;
	cin>>w>>ab;
	if (w % 5 == 0 && w<=ab-0.5) {
		cout<<(ab-w-0.5)<<endl;
	}
	else{
		cout<<ab;
	}
}