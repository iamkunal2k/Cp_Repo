#include<bits/stdc++.h>
using namespace std;

void soln(int ind, std::vector<int> &ds, int n, int arr[]) {
	if (ind == n) {
		for(auto it : ds) {
			cout<<it<<" ";
		}
		if (ds.size() == 0) {
			cout<<"{ }";
		}
		cout<<endl;
		return;
	}
	// exclude condition 
	soln(ind+1, ds, n, arr);

	//include condition
	ds.push_back(arr[ind]);
	soln(ind+1, ds, n, arr);
	ds.pop_back();

}

int main() {
	int arr[] = {4,5,7};
	int n = 3;
	vector<int> ds;
	soln(0, ds, n, arr);

}