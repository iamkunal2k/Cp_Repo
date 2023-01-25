// Reversing an array

#include<bits/stdc++.h>
using namespace std;

// void f(int i, int arr[], int n) {
// 	if (i >= n/2) {
// 		return;
// 	}
// 	swap(arr[i], arr[n-i-1]);
// 	f(i+1, arr, n);
// }

// int main() {
// 	int n;
// 	cin>>n;
// 	int arr[n];
// 	for(int i=0;i<n;i++) {
// 		cin>> arr[i];
// 	}
// 	f(0, arr, n);
// 	for(int i=0;i<n;i++) {
// 		cout<<arr[i]<<" ";
// 	}
// 	return 0;
// }



void funct(int i, int arr[], int n) {
	if (i >= n/2) {
		return;
	}
	swap(arr[i], arr[n-i-1]);
	funct(i+1, arr, n);
}

int main() {
	int n;
	cin>>n;
	int arr[n];
	for (int i=0;i<n; i++) {
		cin>>arr[i];
	}
	funct(0, arr, n);
	for (int i=0; i<n; i++) {cout<<arr[i]<<" ";}
	return 0;
}

