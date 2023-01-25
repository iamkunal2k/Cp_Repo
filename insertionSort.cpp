#include<bits/stdc++.h>
using namespace std;

void InsertionSort (int arr[], int n) {
	for (int i = 1; i < n ; i++) {
		int temp = arr[i] ;
		int j = i-1;

		for(; j >=0 ; j--) {
			if (arr[j] > temp) {
				arr[j+1] = arr[j];
			}

			else {
				break;
			}
		}

		arr[j+1] = temp;
	}
}


void printarray(int arr[], int size ) {
	for (int i=0; i< size; i++) {
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int main () {

	int arr[1000];
	int n;
	cin>>n;

	for (int i = 0; i < n; i++) {
		cin>>arr[i];

	}
	InsertionSort(arr, n);
	printarray(arr, n);
}