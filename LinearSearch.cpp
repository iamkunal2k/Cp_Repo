#include <bits/stdc++.h>
using namespace std;


bool search (int arr[], int size, int key) {
	for (int i=0; i<=size; ++i) {
		if (arr[i] == key) {
			return 1;
		}
	} 	return 0 ; 

}

int main () {
	int arr[10] = {3,4,5,6,98,3,1,11,14,15};
	int key;
	cin>>key;

	bool found = search(arr, 10, key);

	if (found) cout<<"Present"<<endl;
	else cout<<"absent"<<endl;


}