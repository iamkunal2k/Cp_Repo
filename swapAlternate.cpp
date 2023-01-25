#include <bits/stdc++.h>
using namespace std;

void alternate(int arr[], int size) {
	for (int i = 0 ; i <size; i+=2) {
		if (i+1 < size) {swap(arr[i], arr[i+1]);}
	}
}

void printArray(int arr[], int size) {
	for (int i = 0 ; i < size; i++ ) {
		cout<<arr[i]<<" ";
	}cout<<endl;
}


int main() {
	int arr[10] = {1,23,4,55,6,7,8,9,2,44};

	alternate(arr, 10);

	printArray(arr, 10);
}