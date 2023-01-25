#include<bits/stdc++.h>
using namespace std;

int main(){

	int n ;
	cin>>n;
	int i = 0, ans = 0;

	while(n != 0) {

		int bit = n & 1;
		ans = (bit * pow(10, i)) + ans;
		
		n = n >> 1;
		i++;
	}	
	cout<<ans<<'\n';

}

