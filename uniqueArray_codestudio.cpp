// logic used 
// XOR --> 1 xor 1 = 0 
// a xor 0 = a 


//codestudio Question

#include <bits/stdc++.h>
using namespace std;


int main (int *arr, int size) {
	ans = 0;

	for (int i = 0; i <size; i++) {
		ans = ans^arr[i];
	}
	return ans;
}