#include<bits/stdc++.h>
using namespace std;

void printF(int ind, std::vector<int> &ds, int arr[], int n) {
	if (ind == n) {
		for(auto it : ds) {
			cout<< it << " ";
		}
		if (ds.size() == 0) {
			cout<<"{}";
		}
		cout<<endl;
		return;
	}

	// take or pick the particular index of the subsequence

	ds.push_back(arr[ind]);
	printF(ind+1, ds, arr, n);
	ds.pop_back();

	//not take or not pick condition, this element is not added to the subsequence

	printF(ind+1, ds, arr, n);
}

int main () {
	int arr[] = {3,1,2};
	int n = 3;
	vector<int> ds;
	printF(0, ds, arr, n);
}


//for printing in the reverse order the do not pick condition should be kept 1st instead of pick condition