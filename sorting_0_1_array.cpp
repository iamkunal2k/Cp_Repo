#include <bits/stdc++.h>
using namespace std;

void sortarray(int arr[], int n) {
	int left = 0 ;
	int right = n-1;

	while(left < right) {
		
		while(arr[left] == 0 && left < right) {
		left++;
	}

	while(arr[right] == 1 && left< right) {
		right--;
	}

	if (left < right) {
		swap(arr[left], arr[right]);
		left++;
		right--;
	}
	}
}


void printArray(int arr[], int size) {
	for (int i = 0 ; i < size; i++ ) {
		cout<<arr[i]<<" ";
	}cout<<endl;
}


int main () {
	int arr[8] = {0,1,1,1,0,0,1,0};

	sortarray(arr, 8);
	printArray(arr, 8);
} 