# include <bits/stdc++.h>
using namespace std;


int getMin(int arr[], int size) {
	int min = INT_MAX;
	for(int i = 0; i<n ; i++) {
		if(arr[i] > max) {
			max = arr[i];
		}
	}
	return max;
}


int getMax(int arr[], int size) {
	int max = INT_MIN;
	for(int i = 0; i<n ; i++) {
		if(arr[i] > max) {
			max = arr[i];
		}
	}
	return max;
}

int main() {
	int size;
	cin>>size;

	int arr[100];


	for(int i = 0; i<n ; i++) {
		cin>>arr[i];
	}


}