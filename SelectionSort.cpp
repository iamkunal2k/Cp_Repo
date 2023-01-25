#include<bits/stdc++.h>
using namespace std;

void SelectionSort(int arr[], int n) {

	for (int i = 0; i < n-1; i++) {
		int minIndex = i;

		for (int j = i+1; j < n; j++ ) {
			if (arr[j] < arr[minIndex]) {
				minIndex = j;
			}
		}

		swap(arr[minIndex], arr[i]);
	}
}


void printarray (int arr[], int size) {
	for (int i = 0; i< size; i++) {
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}


int main () {
	int n;
	cin>>n;
	int arr[1000];

	for(int i = 0; i < n ; i++) {
		cin>>arr[i];
	}

	SelectionSort(arr, n);
	printarray(arr, n);

}