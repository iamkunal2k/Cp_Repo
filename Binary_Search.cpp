#include<iostream>
using namespace std;

int BinarySearch(int arr[], int size, int key) {
	
	int start = 0;
	int end = size-1;
	int mid = start + (end-start)/2;

	while( start <= end ) {
		
		//Base Condition	

		if (arr[mid] == key) {
			return mid;
		}

		// Right Part 

		if (key > arr[mid]) {
			start = mid + 1;
		}

		// Left Part

		else {
			end = mid - 1;
		}

		//Initializing mid position

		mid = start + (end-start)/2;
	}

	return - 1;
}

int main () { 

	int n, key ;
	cin>>n;
	cin>>key;			// Defining the target value

	int arr[1000];		//Initialize the arr size (we can take any value)

	// Defining the elements in an array

	for (int i = 0; i < n; i++) {
		cin>>arr[i];	
	}	

	int oddIndex = BinarySearch(arr, n, key);

	cout <<"The index for "<<key<<" is : " << oddIndex <<endl;
}