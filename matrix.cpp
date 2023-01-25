#include <bits/stdc++.h> 
using namespace std;


void printArray(int arr[][4], int m, int n) {

	for (int row = 0; row < m; row++) {
		
		for(int col = 0; col < n; col++) {
			cout<<arr[row][col]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;

}


void printSum(int arr[][4], int m, int n) {
	
	for (int row = 0; row < m; m++) {
		int sum = 0;
		for(int col = 0; col < n; col++) {
			sum += arr[row][col];
		}
		cout<<sum<<" " ;
	}

	cout<<endl;
}

int main () {
	int arr[4][4] ;
	int m,n;
	cin>>m>>n;

	for (int row = 0; row < m; row++) {
		for(int col = 0; col < n; col++) {
			cin>>arr[row][col];
		}
	}

	cout<<endl;

	printArray(arr, 4, 4);

	printSum(arr, 4, 4);
}