#include <bits/stdc++.h>
using namespace std;

void reverse(int arr[], int size) {
	
	int start = 0;
	int end = size-1;

	while (start<=end) {
		swap(arr[start], arr[end]);

		start++;
		end--;
	}

}

void printArray(int arr[], int size) {

	for(int i = 0; i<size ; i++) {
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}



int main () {
	int arr[5] = {14,2,5,6,-1};
	int brr[6] = {9,2,4,5,1,6};

	reverse(arr, 5);
	reverse(brr, 6);

	printArray(arr, 5);
	printArray(brr, 6);
}


// Another method using single variable


// void func(int i , int arr[], int n) {
// 	if (i>=n/2) {
// 		return ;
// 	}

// 	swap(arr[i], arr[n-i-1]);
// 	func(i+1, arr, n);
// }


// int main() {
// 	int n;
// 	cin>>n;
// 	int arr[n];
// 	for (int i=0;i<n; i++) {
// 		cin>>arr[i];
// 	}
// 	func(0, arr, n);
// 	for (int i=0; i<n; i++) {cout<<arr[i]<<" ";}
// 	return 0;
// }

