// Problem link :
// https://www.codingninjas.com/studio/problems/modular-exponentiation_1082146?utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_7&leftPanelTab=1


#include <bits/stdc++.h>

int modularExponentiation(int x, int n, int m) {
	// Write your code here.
	int res = 1;

	while( n > 0 ) {

		if(n & 1) {	//odd
			res = ( 1LL * (res) * (x) % m) % m;
		}

		x = (1LL * (x)%m * (x)%m)%m; 		// 1LL is for typecasting
		n = n >> 1;
	}

	return res;
}