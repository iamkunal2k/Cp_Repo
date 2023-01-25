// Bubble Sort


// Time Complexity  (BEST CASE = O(n), AVG & WORST CASE O(n^2))


#include<bits/stdc++.h>
using namespace std;


void BubbleSort ( int arr[], int n) {

	//here we are taking i=1 since the round will start from 1
	for (int i = 1; i < n; i++) {
		bool swapped = false;

		for (int j= 0; j < n-i; j++) {

			//comparing the jth element with j+1 th element
			if (arr[j] > arr[j+1]) {
				swap(arr[j], arr[j+1]);
				swapped = true;
			}
		}

		//Already Sorted (will not check for other condition)
		if (swapped == false) {
			break;
		}
	}

}

void printarray(int arr[], int size ) {
	for (int i=0; i< size; i++) {
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}


int main () {
	int n;
	cin>>n;
	int arr[1000] ;

	for (int i = 0; i < n ; i++) {
		cin>>arr[i];
	}

	BubbleSort(arr, n);
	printarray(arr, n);
}