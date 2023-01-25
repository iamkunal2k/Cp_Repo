#include <bits/stdc++.h> 
using namespace std;

int firstocc(int arr[], int size, int key) {
	int s = 0;
	int e = size - 1 ;
	int ans = -1; 
	int mid = s + (e-s)/2;

	while(s<=e) {
		if (arr[mid] == key) {
			ans = mid;
			e = mid - 1;
		}

		else if (key > arr[mid]) {
			s = mid + 1;
		}

		else {
			e = mid - 1;
		}

		mid = s + (e-s)/2;
	}

	return ans;
}


int lastocc(int arr[], int size, int key) {
	int s = 0;
	int e = size - 1;
	int ans = -1;
	int mid = s + (e-s)/2;

	while(s<=e) {
		if (arr[mid] == key) {
			ans = mid;
			s = mid + 1;
		}

		else if (key > arr[mid]) {
			s = mid + 1;
		}

		else {
			e = mid - 1;
		}

		mid = s + (e-s)/2;
	}

	return ans;
}

int main() {
	int n;
	cin>>n;
	int key;
	cin>>key;
	int arr[1000];

	for (int i = 0; i < n; i++) {
		cin>>arr[i];
	}

	cout<<"The starting index is : "<<firstocc(arr, n, key);
	cout<<"\nThe ending Index is : "<<lastocc(arr, n, key);
}